namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    public partial class GT_SYOHIN_SETTEICHI
    {
        [Key]
        [Column(Order = 0)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyohinSetteichiID { get; set; }

        [Key]
        [Column(Order = 1)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int SyohinTableID { get; set; }

        [Key]
        [Column(Order = 2)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int PlantBinID { get; set; }

        [Key]
        [Column(Order = 3)]
        public byte BinNo { get; set; }

        [Key]
        [Column(Order = 4)]
        public byte ZairyoKbn { get; set; }

        [Key]
        [Column(Order = 5)]
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int ZairyoID { get; set; }

        [Key]
        [Column(Order = 6)]
        public double Setteichi_v { get; set; }

        [Key]
        [Column(Order = 7)]
        public byte Setteichi_k { get; set; }

        [Key]
        [Column(Order = 8)]
        public double Ryo { get; set; }

        [Key]
        [Column(Order = 9)]
        public byte WithRecycleFlag { get; set; }
    }
}
