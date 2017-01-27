using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Http;

using Microsoft.AspNet.SignalR.Client;

namespace ConsoleClient
{
    class Program
    {
        static IHubProxy HubProxy { get; set; }
        static string ServerURI = "http://localhost:5014/signalr";
        static HubConnection Connection { get; set; }
        static void Main(string[] args)
        {

            // Open Connection
            Connection = new HubConnection(ServerURI);
            //Connection.Closed += Connection_Closed;
            HubProxy = Connection.CreateHubProxy("messageHub");
            //Handle incoming event from server: use Invoke to write to console from SignalR's thread
            HubProxy.On<string>("broadcastMessage", (message) =>
                Console.WriteLine(message)
            );

            try
            {
                Connection.Start();
                var conStatus = Connection.State;
                while (conStatus != ConnectionState.Connected)
                {
                    Console.WriteLine($"Connection Status: {conStatus}");
                    conStatus = Connection.State;
                    System.Threading.Thread.Sleep(1000);
                }
            }
            catch (HttpRequestException)
            {
                Console.WriteLine("Unable to connect to server: Start server before connecting clients.");
                return;
            }

            // send
            HubProxy.Invoke("send", "Clientから送信");
            Console.ReadLine();
        }

        private static void Connection_Closed()
        {
            throw new NotImplementedException();
        }
    }
}
