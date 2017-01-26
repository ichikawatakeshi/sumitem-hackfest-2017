namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_BUKKEN
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int BukkenID { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorID { get; set; }

        [StringLength(255)]
        public string GenbaNo { get; set; }

        [StringLength(255)]
        public string NameA_1 { get; set; }

        [StringLength(255)]
        public string NameA_2 { get; set; }

        [StringLength(255)]
        public string NameB { get; set; }

        [StringLength(255)]
        public string Address { get; set; }

        [StringLength(100)]
        public string Tanto { get; set; }

        [StringLength(30)]
        public string Tel { get; set; }

        [StringLength(10)]
        public string Joken { get; set; }

        [StringLength(10)]
        public string KeiyakuCD { get; set; }

        [Key]
        [Column(Order = 2)]
        public double KeiyakuSuryo_v { get; set; }

        [Key]
        [Column(Order = 3)]
        public byte KeiyakuSuryo_k { get; set; }

        [Key]
        [Column(Order = 4)]
        public byte KeiyakubiFlag { get; set; }

        public DateTime? Keiyakubi { get; set; }

        [Key]
        [Column(Order = 5)]
        public byte FKikanFlag { get; set; }

        public DateTime? FKikan { get; set; }

        [Key]
        [Column(Order = 6)]
        public byte TKikanFlag { get; set; }

        public DateTime? TKikan { get; set; }

        [Key]
        [Column(Order = 7)]
        public byte FinishFlag { get; set; }

        [Key]
        [Column(Order = 8)]
        public byte FinishDateFlag { get; set; }

        public DateTime? FinishDate { get; set; }

        [StringLength(255)]
        public string Biko { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte HaigoShiteiFlag { get; set; }

        public DateTime? UpdateDate { get; set; }

        [Key]
        [Column(Order = 10)]
        public byte DeleteFlg { get; set; }

        [StringLength(10)]
        public string KeiyakuSubCD { get; set; }

        [Key]
        [Column(Order = 11)]
        public double AccumulateVolume_v { get; set; }

        [Key]
        [Column(Order = 12)]
        public byte AccumulateVolume_k { get; set; }

        [Key]
        [Column(Order = 13)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int ChimeiID { get; set; }

        [Key]
        [Column(Order = 14)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short GoGenbaMinutes { get; set; }

        [Key]
        [Column(Order = 15)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short ReturnKojoMinutes { get; set; }

        [Key]
        [Column(Order = 16, TypeName = "money")]
        public decimal AreaWarimashiKingaku { get; set; }

        [StringLength(255)]
        public string ListMemo { get; set; }

        [Key]
        [Column(Order = 17)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int WariMainKojoID { get; set; }

        [StringLength(255)]
        public string SecondCustomer { get; set; }

        public DateTime? KeiyakuFinishDate { get; set; }

        [StringLength(255)]
        public string AddressB { get; set; }

        public DateTime? Na2ODate { get; set; }

        public DateTime? KyusuiDate { get; set; }

        [StringLength(255)]
        public string Kigen { get; set; }

        [StringLength(255)]
        public string HokokuName { get; set; }

        [StringLength(8)]
        public string HokokuDateStr { get; set; }

        public DateTime? AeDate { get; set; }

        public DateTime? AdDate { get; set; }

        [Key]
        [Column(Order = 18)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TKCount { get; set; }

        [Key]
        [Column(Order = 19)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short Ofuku { get; set; }

        [Key]
        [Column(Order = 20)]
        public byte Syasyu { get; set; }

        public DateTime? HokokuDate { get; set; }

        [Key]
        [Column(Order = 21)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KigenNo { get; set; }

        [Key]
        [Column(Order = 22)]
        public byte NoDisplay { get; set; }

        [Key]
        [Column(Order = 23)]
        public byte NydPrintNo { get; set; }
    }
}
