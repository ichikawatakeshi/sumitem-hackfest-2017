using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
//using System.Web.Mvc;
using WebApplication3.Models;
using System.Web.Http;
using System.Web.Http.Description;
using Newtonsoft.Json;
using System.Web.Http.Cors;

namespace WebApplication3.Controllers
{
    [EnableCors(origins: "*", headers: "*", methods: "*")]
    public class YoteiController : ApiController
    {
        private Model2 db = new Model2();

        // GET: Yotei

        [ResponseType(typeof(GT_SYKHEAD))]
        [HttpGet]
        public IHttpActionResult Index(DateTime date)
        {
            //ViewBag.Date = date.ToLongDateString();

            GT_SYKHEAD gT_SYKHEAD = db.GT_SYKHEAD.Find(date);
            if (gT_SYKHEAD == null)
            {
                return NotFound();
            }

            string output = JsonConvert.SerializeObject(gT_SYKHEAD);
            return Ok(output);

            //return View();
        }

    }
}