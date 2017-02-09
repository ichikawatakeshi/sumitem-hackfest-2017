using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.ServiceBus.Messaging;
using System.Threading;
using Microsoft.Azure.Devices.Client;

using Newtonsoft.Json;
using System.Configuration;

using SampleConnectDeviceLib;

namespace CommIot
{
    class Program
    {
        static ConnectSerialDevice connectSerialDeveice = new ConnectSerialDevice();

        static DeviceClient deviceClient;
        static string iotHubConnectionString = ConfigurationManager.AppSettings["IoTHubConnectionString"];

        static void Main(string[] args)
        {
            Console.WriteLine("Starting...");

            deviceClient = DeviceClient.CreateFromConnectionString(iotHubConnectionString, Microsoft.Azure.Devices.Client.TransportType.Amqp);

            {
                ReceiveDataSerial receiveDataSerial = new ReceiveDataSerial();
                receiveDataSerial.ClearData();
                SendData sendData = SetSendData(receiveDataSerial);

                sendData.deviceid = ConfigurationManager.AppSettings["IoTHubDeviceID"];
                sendData.status = "none";
                var payload = JsonConvert.SerializeObject(sendData);
                var message = new Message(System.Text.UTF8Encoding.UTF8.GetBytes(payload));
                deviceClient.SendEventAsync(message);
            }

            Thread thread = new Thread(() =>
            {
                connectSerialDeveice.StartThread("COM1");

                ReceiveCommands();

                while (connectSerialDeveice != null)
                {
                    if (connectSerialDeveice.ReceiveFlag == 1)
                    {
                        SendData sendData = SetSendData(connectSerialDeveice.ReceiveDataSerial);

                        sendData.deviceid = "IoTHubDeviceID";
                        var payload = JsonConvert.SerializeObject(sendData);
                        var message = new Message(System.Text.UTF8Encoding.UTF8.GetBytes(payload));
                        deviceClient.SendEventAsync(message);

                        connectSerialDeveice.ReceiveFlag = 0;
                    }
                }
            });

            thread.Start();

            while (true)
            {
                Console.WriteLine("Start monitoring");
                Console.WriteLine("Press Enter to exit");
                Console.ReadLine();
                break;
            }

            connectSerialDeveice.EndThread();

            connectSerialDeveice = null;

            Environment.Exit(0);
        }

        static SendData SetSendData(ReceiveDataSerial receiveDataSerial)
        {
            SendData data = new SendData();

            data.status = receiveDataSerial.Status;
            data.BpBatchNo = receiveDataSerial.BpBatchNo;
            data.BpTime = receiveDataSerial.BpTime;
            data.Neriryo = receiveDataSerial.Neriryo;
            data.Setteichi = receiveDataSerial.Setteichi;
            data.Keiryochi = receiveDataSerial.Keiryochi;
            data.Hyomensui = receiveDataSerial.Hyomensui;
            data.Yoseki = receiveDataSerial.Yoseki;
            data.RefSykNo = receiveDataSerial.RefSykNo;
            data.RefSyaban = receiveDataSerial.RefSyaban;
            data.RefHaigoNo = receiveDataSerial.RefHaigoNo;

            return data;
        }

        static void SetSendData(ReceiveData data)
        {
            connectSerialDeveice.SendDataSerial.ClearData();

            connectSerialDeveice.SendDataSerial.HMCD = data.HMCD;
            connectSerialDeveice.SendDataSerial.SykCD = data.SykCD;
            connectSerialDeveice.SendDataSerial.SyohinCD = data.SyohinCD;
            connectSerialDeveice.SendDataSerial.NeriKbn = data.NeriKbn;
            connectSerialDeveice.SendDataSerial.Kyodo = data.Kyodo;
            connectSerialDeveice.SendDataSerial.Slump = data.Slump;
            connectSerialDeveice.SendDataSerial.Kotsusun = data.Kotsusun;
            connectSerialDeveice.SendDataSerial.Cement = data.Cement;
            connectSerialDeveice.SendDataSerial.Hinmei = data.Hinmei;
            connectSerialDeveice.SendDataSerial.Seizoryo = data.Seizoryo;
            connectSerialDeveice.SendDataSerial.Syaban = data.Syaban;
            connectSerialDeveice.SendDataSerial.GenbaName = data.GenbaName;
            connectSerialDeveice.SendDataSerial.SekoName = data.SekoName;
            connectSerialDeveice.SendDataSerial.Biko = data.Biko;
            connectSerialDeveice.SendDataSerial.DispSykSykryo = data.DispSykSykryo;
            connectSerialDeveice.SendDataSerial.DispSykDaisu = data.DispSykDaisu;
            connectSerialDeveice.SendDataSerial.DispSumSuryo = data.DispSumSuryo;
            connectSerialDeveice.SendDataSerial.DispSumDaisu = data.DispSumDaisu;
            connectSerialDeveice.SendDataSerial.Jis = data.Jis;
            connectSerialDeveice.SendDataSerial.Yoseki = data.Yoseki;
            for (short i = 0; i < data.Setteichi.Count; i++)
            {
                connectSerialDeveice.SendDataSerial.Setteichi[i] = data.Setteichi[i];
            }
        }

        static async void ReceiveCommands()
        {
            Message receivedMessage;
            string messageData;

            while (true)
            {
                try
                {
                    receivedMessage = await deviceClient.ReceiveAsync();

                    if (receivedMessage != null)
                    {
                        messageData = Encoding.ASCII.GetString(receivedMessage.GetBytes());
                        Console.WriteLine("\t{0}> Received message: {1}", DateTime.Now.ToLocalTime(), messageData);
                        await deviceClient.CompleteAsync(receivedMessage);

                        ReceiveData data = JsonConvert.DeserializeObject<ReceiveData>(messageData);
                        SetSendData(data);
                        connectSerialDeveice.SendFlag = 1;
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine("IoT Hub Receive Failed.");
                    Console.WriteLine(ex.Message);
                }
                await Task.Delay(TimeSpan.FromSeconds(1));
            }

        }

        public class SendData
        {
            public SendData()
            {
                deviceid = "";
                status = "";
                BpBatchNo = 0;
                BpTime = DateTime.Now;
                Neriryo = 0;
                Setteichi = "";
                Keiryochi = "";
                Hyomensui = "";
                Yoseki = 0;
                RefSykNo = 0;
                RefSyaban = "";
                RefHaigoNo = "";
            }
            public string deviceid { get; set; }
            public string status { get; set; }
            public short BpBatchNo { get; set; }
            public DateTime BpTime { get; set; }
            public double Neriryo { get; set; }
            public string Setteichi { get; set; }
            public string Keiryochi { get; set; }
            public string Hyomensui { get; set; }
            public double Yoseki { get; set; }
            public short RefSykNo { get; set; }
            public string RefSyaban { get; set; }
            public string RefHaigoNo { get; set; }
        }

        public class ReceiveData
        {
            public ReceiveData()
            {
                HMCD = 0;
                SykCD = 0;
                SyohinCD = "";
                NeriKbn = 0;
                Kyodo = "";
                Slump = "";
                Kotsusun = "";
                Cement = "";
                Hinmei = "";
                Seizoryo = 0;
                Syaban = "";
                GenbaName = "";
                SekoName = "";
                Biko = "";
                DispSykSykryo = 0;
                DispSykDaisu = 0;
                DispSumSuryo = 0;
                DispSumDaisu = 0;
                Jis = 0;
                Yoseki = 0;
                Setteichi = new List<double>();
            }

            public byte HMCD { get; set; }
            public short SykCD { get; set; }
            public string SyohinCD { get; set; }
            public byte NeriKbn { get; set; }
            public string Kyodo { get; set; }
            public string Slump { get; set; }
            public string Kotsusun { get; set; }
            public string Cement { get; set; }
            public string Hinmei { get; set; }
            public double Seizoryo { get; set; }
            public string Syaban { get; set; }
            public string GenbaName { get; set; }
            public string SekoName { get; set; }
            public string Biko { get; set; }
            public double DispSykSykryo { get; set; }
            public short DispSykDaisu { get; set; }
            public double DispSumSuryo { get; set; }
            public short DispSumDaisu { get; set; }
            public byte Jis { get; set; }
            public double Yoseki { get; set; }
            public List<double> Setteichi { get; set; }

        }
    }
}
