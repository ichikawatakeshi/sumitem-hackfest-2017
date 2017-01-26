namespace shipment.Models
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel.DataAnnotations;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Data.Entity.Spatial;

    [Table("DeviceData")]
    public partial class DeviceData
    {
        public int DeviceDataID { get; set; }

        public short? PlantCD { get; set; }

        public short? BpBatchNo { get; set; }

        public DateTime? BpTime { get; set; }

        public double? Neriryo { get; set; }

        [StringLength(512)]
        public string Setteichi { get; set; }

        [StringLength(512)]
        public string Keiryochi { get; set; }

        [StringLength(512)]
        public string Hyomensui { get; set; }

        public double? Yoseki { get; set; }

        public short? RefSykNo { get; set; }

        [StringLength(10)]
        public string RefSyaban { get; set; }

        [StringLength(10)]
        public string RefHaigoNo { get; set; }
    }
}
