namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_TOR
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorID { get; set; }

        [StringLength(10)]
        public string TorCD { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KaisyaCD { get; set; }

        [Key]
        [Column(Order = 2)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KojoCD { get; set; }

        [Key]
        [Column(Order = 3)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short PlantCD { get; set; }

        [StringLength(255)]
        public string NameA { get; set; }

        [StringLength(255)]
        public string NameB { get; set; }

        [StringLength(40)]
        public string Kana { get; set; }

        [StringLength(10)]
        public string Post { get; set; }

        [StringLength(255)]
        public string Address_1 { get; set; }

        [StringLength(255)]
        public string Address_2 { get; set; }

        [StringLength(30)]
        public string Tel { get; set; }

        [StringLength(30)]
        public string Fax { get; set; }

        [StringLength(10)]
        public string Keisyo { get; set; }

        [StringLength(50)]
        public string SubCD { get; set; }

        [Key]
        [Column(Order = 4)]
        public byte Torkbn { get; set; }

        public DateTime? UpdateDate { get; set; }

        [Key]
        [Column(Order = 5)]
        public byte DeleteFlg { get; set; }

        [StringLength(255)]
        public string ListMemo { get; set; }

        [Key]
        [Column(Order = 6)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorRank { get; set; }

        [StringLength(512)]
        public string TorMemo { get; set; }

        [Key]
        [Column(Order = 7)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TKCount { get; set; }

        [Key]
        [Column(Order = 8)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorKanriGroupID1 { get; set; }

        [Key]
        [Column(Order = 9)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorKanriGroupID2 { get; set; }

        [Key]
        [Column(Order = 10)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorKanriGroupID3 { get; set; }

        [Key]
        [Column(Order = 11)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorKanriGroupID4 { get; set; }

        [Key]
        [Column(Order = 12)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int TorKanriGroupID5 { get; set; }
    }
}
