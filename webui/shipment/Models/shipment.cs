using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace shipment.Models
{
    public class shipment
    {
        //ID
        public int ID { get; set; }

        //指示区分
        public byte HMCD1 { get; set; }

        //出荷No
        public int SykCD { get; set; }

        //商品CD
        public string SyohinCD { get; set; }

        //練種別
        public int NeriKbnID1 { get; set; }

        //強度
        public string YobiKyodo { get; set; }

        //スランプ
        public string YobiSlump { get; set; }

        //骨寸
        public string YobiKotsusun { get; set; }

        //セメント
        public string YobiCement { get; set; }

        //品名
        public string Hinmei { get; set; }


        //現場名
        public string NameB_Bukken { get; set; }

        //施工者名
        public string NameB_Tor { get; set; }

        //出荷台数（予定）
        public int SYK_Daisu { get; set; }
        //出荷数量（予定）
        public double SYK_Sykryo { get; set; }
        //出荷台数（全体）
        public int SYKHEAD_Daisu { get; set; }
        //出荷数量（全体）
        public double YKHEAD_Suryo { get; set; }
        //容積補
        public double Yoseki { get; set; }
        // 設定値
        public double Setteichi { get; set; }


        //製造量
        public double Seizo { get; set; }
        //車番
        public string Syaban { get; set; }
        //備考
        public string Biko { get; set; }
        //JIS
        public byte Jis { get; set; }
        //配合種別
        public byte Syubetu { get; set; }
    }


}