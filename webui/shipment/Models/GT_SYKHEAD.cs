namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_SYKHEAD
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
        public DateTime Eigyobi { get; set; }

        [Key]
        [Column(Order = 4)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SykHeadID { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int NonyusyoNo { get; set; }

        [Key]
        [Column(Order = 6)]
        public double Sykryo_v { get; set; }

        [Key]
        [Column(Order = 7)]
        public byte Sykryo_k { get; set; }

        [Key]
        [Column(Order = 8)]
        public double Seizoryo_v { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte Seizoryo_k { get; set; }

        [Key]
        [Column(Order = 10)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SykDaisu { get; set; }

        [Key]
        [Column(Order = 11)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short SeizoDaisu { get; set; }

        [Key]
        [Column(Order = 12)]
        public byte UpdateFlag { get; set; }

        [Key]
        [Column(Order = 13)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public short DokajuNo { get; set; }

        public DateTime? UpdateDate { get; set; }
    }
}
