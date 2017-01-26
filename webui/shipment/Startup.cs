using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(shipment.Startup))]
namespace shipment
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
