namespace shipment.Models
{
    using System;
    using System.Data.Entity;
    using System.ComponentModel.DataAnnotations.Schema;
    using System.Linq;

    public partial class Model1 : DbContext
    {
        public Model1()
            : base("name=ModelGSumitemV5")
        {
        }

        public virtual DbSet<DeviceData> DeviceData { get; set; }
        public virtual DbSet<DeviceMap> DeviceMap { get; set; }
        public virtual DbSet<GT_BUKKEN> GT_BUKKEN { get; set; }
        public virtual DbSet<GT_SYK> GT_SYK { get; set; }
        public virtual DbSet<GT_SYKHEAD> GT_SYKHEAD { get; set; }
        public virtual DbSet<GT_SYOHIN> GT_SYOHIN { get; set; }
        public virtual DbSet<GT_SYOHIN_SETTEICHI> GT_SYOHIN_SETTEICHI { get; set; }
        public virtual DbSet<GT_SYOHIN_TABLE> GT_SYOHIN_TABLE { get; set; }
        public virtual DbSet<GT_TOR> GT_TOR { get; set; }
        public virtual DbSet<ST_SRY> ST_SRY { get; set; }

        protected override void OnModelCreating(DbModelBuilder modelBuilder)
        {
            modelBuilder.Entity<DeviceData>()
                .Property(e => e.Setteichi)
                .IsUnicode(false);

            modelBuilder.Entity<DeviceData>()
                .Property(e => e.Keiryochi)
                .IsUnicode(false);

            modelBuilder.Entity<DeviceData>()
                .Property(e => e.Hyomensui)
                .IsUnicode(false);

            modelBuilder.Entity<DeviceData>()
                .Property(e => e.RefSyaban)
                .IsUnicode(false);

            modelBuilder.Entity<DeviceData>()
                .Property(e => e.RefHaigoNo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.GenbaNo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.NameA_1)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.NameA_2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.NameB)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Address)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Tanto)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Tel)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Joken)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.KeiyakuCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Biko)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.KeiyakuSubCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.AreaWarimashiKingaku)
                .HasPrecision(19, 4);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.ListMemo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.SecondCustomer)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.AddressB)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.Kigen)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.HokokuName)
                .IsUnicode(false);

            modelBuilder.Entity<GT_BUKKEN>()
                .Property(e => e.HokokuDateStr)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.Joken)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.Hiritsu1)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.Hiritsu2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.Biko)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.YoteiBiko)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYK>()
                .Property(e => e.FurikaeBiko)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.SyohinCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.YobiKyodo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.YobiSlump)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.YobiKotsusun)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.YobiCement)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.Hinmei)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.Joken)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.Tani)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.SubCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.HaigoMemo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN>()
                .Property(e => e.SubCD2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN_TABLE>()
                .Property(e => e.Hiritsu1)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN_TABLE>()
                .Property(e => e.Hiritsu2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN_TABLE>()
                .Property(e => e.MobiusLoop1)
                .IsUnicode(false);

            modelBuilder.Entity<GT_SYOHIN_TABLE>()
                .Property(e => e.MobiusLoop2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.TorCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.NameA)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.NameB)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Kana)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Post)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Address_1)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Address_2)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Tel)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Fax)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.Keisyo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.SubCD)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.ListMemo)
                .IsUnicode(false);

            modelBuilder.Entity<GT_TOR>()
                .Property(e => e.TorMemo)
                .IsUnicode(false);

            modelBuilder.Entity<ST_SRY>()
                .Property(e => e.SryCD)
                .IsUnicode(false);

            modelBuilder.Entity<ST_SRY>()
                .Property(e => e.Driver)
                .IsUnicode(false);

            modelBuilder.Entity<ST_SRY>()
                .Property(e => e.Shiyoriyu)
                .IsUnicode(false);

            modelBuilder.Entity<ST_SRY>()
                .Property(e => e.NonyuJokenCD)
                .IsUnicode(false);
        }
    }
}
