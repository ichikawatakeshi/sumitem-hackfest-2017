namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class ST_SRY
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
        [StringLength(5)]
        public string SryCD { get; set; }

        [Key]
        [Column(Order = 4)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryID { get; set; }

        [StringLength(255)]
        public string Driver { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryKbnID { get; set; }

        [Key]
        [Column(Order = 6)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SyasyuKbn { get; set; }

        [Key]
        [Column(Order = 7)]
        public double Sekisai_v { get; set; }

        [Key]
        [Column(Order = 8)]
        public byte Sekisai_k { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte ShiyoKbn { get; set; }

        [StringLength(255)]
        public string Shiyoriyu { get; set; }

        [Key]
        [Column(Order = 10)]
        public byte HaisyaKbn { get; set; }

        [Key]
        [Column(Order = 11)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NonyusyoID { get; set; }

        [Key]
        [Column(Order = 12)]
        public byte HatsuTimeFlag { get; set; }

        public DateTime? HatsuTime { get; set; }

        [Key]
        [Column(Order = 13)]
        public byte CyakuTimeFlag { get; set; }

        public DateTime? CyakuTime { get; set; }

        [Key]
        [Column(Order = 14)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int KicyakuID { get; set; }

        [Key]
        [Column(Order = 15)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short DriverCD { get; set; }

        [Key]
        [Column(Order = 16)]
        public double Modoriryo_v { get; set; }

        [Key]
        [Column(Order = 17)]
        public byte Modoriryo_k { get; set; }

        [Key]
        [Column(Order = 18)]
        public double SekisaiSyk_v { get; set; }

        [Key]
        [Column(Order = 19)]
        public byte SekisaiSyk_k { get; set; }

        [Key]
        [Column(Order = 20)]
        public byte RestStartTimeFlag { get; set; }

        public DateTime? RestStartTime { get; set; }

        [Key]
        [Column(Order = 21)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SryRankID { get; set; }

        [StringLength(10)]
        public string NonyuJokenCD { get; set; }
    }
}
