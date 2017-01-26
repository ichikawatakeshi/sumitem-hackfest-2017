namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_SYOHIN_TABLE
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyohinID { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short TableKbn { get; set; }

        [Key]
        [Column(Order = 2)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short TableNo { get; set; }

        [Key]
        [Column(Order = 3)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyohinTableID { get; set; }

        [Key]
        [Column(Order = 4)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NeriKbnID1 { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NeriKbnID2 { get; set; }

        [StringLength(99)]
        public string Hiritsu1 { get; set; }

        [StringLength(99)]
        public string Hiritsu2 { get; set; }

        [Key]
        [Column(Order = 6)]
        public byte HMCD1 { get; set; }

        [Key]
        [Column(Order = 7)]
        public byte HMCD2 { get; set; }

        [StringLength(80)]
        public string MobiusLoop1 { get; set; }

        [StringLength(80)]
        public string MobiusLoop2 { get; set; }

        [Key]
        [Column(Order = 8)]
        public byte SludgeFlg1 { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte SludgeFlg2 { get; set; }

        [Key]
        [Column(Order = 10)]
        public double RatioRecycleSr1_v { get; set; }

        [Key]
        [Column(Order = 11)]
        public byte RatioRecycleSr1_k { get; set; }

        [Key]
        [Column(Order = 12)]
        public double RatioRecycleSr2_v { get; set; }

        [Key]
        [Column(Order = 13)]
        public byte RatioRecycleSr2_k { get; set; }

        [Key]
        [Column(Order = 14)]
        public double RatioRecycleGr1_v { get; set; }

        [Key]
        [Column(Order = 15)]
        public byte RatioRecycleGr1_k { get; set; }

        [Key]
        [Column(Order = 16)]
        public double RatioRecycleGr2_v { get; set; }

        [Key]
        [Column(Order = 17)]
        public byte RatioRecycleGr2_k { get; set; }
    }
}
