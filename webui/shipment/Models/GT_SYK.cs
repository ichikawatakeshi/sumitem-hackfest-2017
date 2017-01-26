namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_SYK
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SykHeadID { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SykCD { get; set; }

        [Key]
        [Column(Order = 2)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SykID { get; set; }

        [Key]
        [Column(Order = 3)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int BukkenHaigoID { get; set; }

        [Key]
        [Column(Order = 4)]
        public byte Jis { get; set; }

        [StringLength(10)]
        public string Joken { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NeriKbnID1 { get; set; }

        [Key]
        [Column(Order = 6)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NeriKbnID2 { get; set; }

        [StringLength(255)]
        public string Hiritsu1 { get; set; }

        [StringLength(255)]
        public string Hiritsu2 { get; set; }

        [Key]
        [Column(Order = 7)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int FabOptionID1 { get; set; }

        [Key]
        [Column(Order = 8)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int FabOptionID2 { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte YoteiTimeFlag { get; set; }

        public DateTime? YoteiTime { get; set; }

        [Key]
        [Column(Order = 10)]
        public double Yoteisuryo_v { get; set; }

        [Key]
        [Column(Order = 11)]
        public byte Yoteisuryo_k { get; set; }

        [Key]
        [Column(Order = 12)]
        public double SumSykryo_v { get; set; }

        [Key]
        [Column(Order = 13)]
        public byte SumSykryo_k { get; set; }

        [Key]
        [Column(Order = 14)]
        public double SumSeizoryo_v { get; set; }

        [Key]
        [Column(Order = 15)]
        public byte SumSeizoryo_k { get; set; }

        [Key]
        [Column(Order = 16)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SykDaisu { get; set; }

        [Key]
        [Column(Order = 17)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SeizoDaisu { get; set; }

        [StringLength(255)]
        public string Biko { get; set; }

        [StringLength(255)]
        public string YoteiBiko { get; set; }

        [Key]
        [Column(Order = 18)]
        public byte UriageKbn { get; set; }

        [Key]
        [Column(Order = 19)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short PitchTime { get; set; }

        [Key]
        [Column(Order = 20)]
        public double PitchSykryo_v { get; set; }

        [Key]
        [Column(Order = 21)]
        public byte PitchSykryo_k { get; set; }

        [Key]
        [Column(Order = 22)]
        public double PitchSeizoryo_v { get; set; }

        [Key]
        [Column(Order = 23)]
        public byte PitchSeizoryo_k { get; set; }

        [Key]
        [Column(Order = 24)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short WariateDaisu { get; set; }

        public DateTime? NextYoteiTime { get; set; }

        public DateTime? UseTime { get; set; }

        public DateTime? UpdateDate { get; set; }

        [Key]
        [Column(Order = 25)]
        public byte SykFinishFlag { get; set; }

        [Key]
        [Column(Order = 26)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short BaseTankaKbn { get; set; }

        [Key]
        [Column(Order = 27)]
        public byte PrintYokuseiFlag { get; set; }

        [Key]
        [Column(Order = 28)]
        public double SumUseModoriryo_v { get; set; }

        [Key]
        [Column(Order = 29)]
        public byte SumUseModoriryo_k { get; set; }

        [Key]
        [Column(Order = 30)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int LastTempNeriID { get; set; }

        [Key]
        [Column(Order = 31)]
        public byte YoteiKaisu { get; set; }

        [Key]
        [Column(Order = 32)]
        public byte YoteiTimeFlag2 { get; set; }

        [Key]
        [Column(Order = 33)]
        public byte YoteiTimeFlag3 { get; set; }

        public DateTime? YoteiTime2 { get; set; }

        public DateTime? YoteiTime3 { get; set; }

        [Key]
        [Column(Order = 34)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryRankID1 { get; set; }

        [Key]
        [Column(Order = 35)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryRankID2 { get; set; }

        [Key]
        [Column(Order = 36)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryRankID3 { get; set; }

        [Key]
        [Column(Order = 37)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int YusoKeiyakuID1 { get; set; }

        [Key]
        [Column(Order = 38)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int YusoKeiyakuID2 { get; set; }

        [Key]
        [Column(Order = 39)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int YusoKeiyakuID3 { get; set; }

        [Key]
        [Column(Order = 40)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short PitchTime2 { get; set; }

        [Key]
        [Column(Order = 41)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short PitchTime3 { get; set; }

        [Key]
        [Column(Order = 42)]
        public double YusoSuryo1_v { get; set; }

        [Key]
        [Column(Order = 43)]
        public byte YusoSuryo1_k { get; set; }

        [Key]
        [Column(Order = 44)]
        public double YusoSuryo2_v { get; set; }

        [Key]
        [Column(Order = 45)]
        public byte YusoSuryo2_k { get; set; }

        [Key]
        [Column(Order = 46)]
        public double YusoSuryo3_v { get; set; }

        [Key]
        [Column(Order = 47)]
        public byte YusoSuryo3_k { get; set; }

        [Key]
        [Column(Order = 48)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short GoGenbaMinutes { get; set; }

        [Key]
        [Column(Order = 49)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short ReturnKojoMinutes { get; set; }

        [Key]
        [Column(Order = 50)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short MachiDaisu { get; set; }

        [Key]
        [Column(Order = 51)]
        public double MachiSuryo_v { get; set; }

        [Key]
        [Column(Order = 52)]
        public byte MachiSuryo_k { get; set; }

        [Key]
        [Column(Order = 53)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int FurikaeBukkenHaigoID { get; set; }

        [Key]
        [Column(Order = 54)]
        public byte FurikaeJis { get; set; }

        [StringLength(255)]
        public string FurikaeBiko { get; set; }

        [Key]
        [Column(Order = 55)]
        public byte NydHgType { get; set; }

        [Key]
        [Column(Order = 56)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short NydHgType2TblNo { get; set; }

        [Key]
        [Column(Order = 57)]
        public double KijunTsumikomiryo_v { get; set; }

        [Key]
        [Column(Order = 58)]
        public byte KijunTsumikomiryo_k { get; set; }

        [Key]
        [Column(Order = 59)]
        public byte SykStatus { get; set; }

        [Key]
        [Column(Order = 60)]
        public byte NydHgOutput { get; set; }

        [Key]
        [Column(Order = 61)]
        public byte MobiusLoopFlg { get; set; }

        [Key]
        [Column(Order = 62)]
        public byte SludgeFlg { get; set; }

        [Key]
        [Column(Order = 63)]
        public byte HMCD1 { get; set; }

        [Key]
        [Column(Order = 64)]
        public byte HMCD2 { get; set; }

        [Key]
        [Column(Order = 65)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SetteichiTableKbn { get; set; }

        [Key]
        [Column(Order = 66)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SetteichiTableNo { get; set; }

        [Key]
        [Column(Order = 67)]
        public byte SykOrderMailStatus { get; set; }

        [Key]
        [Column(Order = 68)]
        public byte RecycleSr { get; set; }

        [Key]
        [Column(Order = 69)]
        public byte RecycleGr { get; set; }

        [Key]
        [Column(Order = 70)]
        public double RatioRecycleSr_v { get; set; }

        [Key]
        [Column(Order = 71)]
        public byte RatioRecycleSr_k { get; set; }

        [Key]
        [Column(Order = 72)]
        public double RatioRecycleGr_v { get; set; }

        [Key]
        [Column(Order = 73)]
        public byte RatioRecycleGr_k { get; set; }

        [Key]
        [Column(Order = 74)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NonyuKbnID { get; set; }

        [Key]
        [Column(Order = 75)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SykPlantCD { get; set; }

        [Key]
        [Column(Order = 76)]
        public byte NotJisNydHgTypeChgFlag { get; set; }

        [Key]
        [Column(Order = 77)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short NotJisNydHgType { get; set; }

        [Key]
        [Column(Order = 78)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short NotJisNydHgType2TblNo { get; set; }
    }
}
