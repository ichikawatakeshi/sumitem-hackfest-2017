using System;
using System.Threading.Tasks;
using Microsoft.Owin;
using Microsoft.Owin.Cors;
using Owin;

[assembly: OwinStartup(typeof(IoTHackFest_ScheduleMessageBusSignalR.Startup))]

namespace IoTHackFest_ScheduleMessageBusSignalR
{
    public class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            // アプリケーションの設定方法の詳細については、http://go.microsoft.com/fwlink/?LinkID=316888 を参照してください
            app.MapSignalR();
            app.UseCors(CorsOptions.AllowAll);
        }
    }
}
