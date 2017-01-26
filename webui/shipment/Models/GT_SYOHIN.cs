namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_SYOHIN
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KaisyaCD { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KojoCD { get; set; }

        [Key]
        [Column(Order = 2)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short PlantCD { get; set; }

        [Key]
        [Column(Order = 3)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SyohinKbn { get; set; }

        [Key]
        [Column(Order = 4)]
        [StringLength(10)]
        public string SyohinCD { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyohinID { get; set; }

        [Key]
        [Column(Order = 6)]
        public byte HaigoKbn { get; set; }

        [Key]
        [Column(Order = 7)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int YobiConcrete { get; set; }

        [StringLength(50)]
        public string YobiKyodo { get; set; }

        [StringLength(50)]
        public string YobiSlump { get; set; }

        [StringLength(50)]
        public string YobiKotsusun { get; set; }

        [StringLength(50)]
        public string YobiCement { get; set; }

        [StringLength(255)]
        public string Hinmei { get; set; }

        [Key]
        [Column(Order = 8)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short Jis { get; set; }

        [StringLength(10)]
        public string Joken { get; set; }

        [StringLength(10)]
        public string Tani { get; set; }

        [StringLength(20)]
        public string SubCD { get; set; }

        [StringLength(255)]
        public string HaigoMemo { get; set; }

        [Key]
        [Column(Order = 9)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int YobiKbnID { get; set; }

        [Key]
        [Column(Order = 10)]
        public byte KazeiKbn { get; set; }

        [Key]
        [Column(Order = 11)]
        public byte ShiteiFlag { get; set; }

        [Key]
        [Column(Order = 12)]
        public byte TensoFlag { get; set; }

        public DateTime? UpdateDate { get; set; }

        [Key]
        [Column(Order = 13)]
        public byte DeleteFlag { get; set; }

        [Key]
        [Column(Order = 14)]
        public byte OfflineTensoFlag { get; set; }

        [Key]
        [Column(Order = 15)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short KyodoGroupNo { get; set; }

        [Key]
        [Column(Order = 16)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short UriageFraction { get; set; }

        [Key]
        [Column(Order = 17)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyukeiGroupID { get; set; }

        [Key]
        [Column(Order = 18)]
        public byte DispSuryoInt { get; set; }

        [Key]
        [Column(Order = 19)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int HaigoBaseID { get; set; }

        [Key]
        [Column(Order = 20)]
        public byte SaKongo { get; set; }

        [Key]
        [Column(Order = 21)]
        public byte AgKongo { get; set; }

        [Key]
        [Column(Order = 22)]
        public byte RecycleSr { get; set; }

        [Key]
        [Column(Order = 23)]
        public byte RecycleGr { get; set; }

        [StringLength(20)]
        public string SubCD2 { get; set; }
    }
}
