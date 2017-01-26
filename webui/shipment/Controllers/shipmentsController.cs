using System;
using System.Collections.Generic;
using System.Data;
using System.Data.Entity;
using System.Data.Entity.Infrastructure;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using System.Web.Http.Description;
using shipment.Models;

using Newtonsoft.Json;

namespace shipment.Controllers
{
    public class shipmentsController : ApiController
    {
        private Model1 db = new Model1();

        // GET: api/shipments
        public IHttpActionResult GetshipmentModesls()
        {
             
            // Jsonデータ作成
            CreateYoteiData();

            string output = JsonConvert.SerializeObject(db);

            return Ok(output);
        }

        // POST: api/shipments
        public IHttpActionResult Postshipment(shipment.Models.shipment shipment)
        {

            // IoT hubへ送信


            return Ok("value");
        }

        //
        public bool CreateYoteiData()
        {
            // システム日付



            return true;
        }

        //// GET: api/shipments/5
        //[ResponseType(typeof(shipment))]
        //public IHttpActionResult Getshipment(int id)
        //{
        //    shipment shipment = db.shipmentModesls.Find(id);
        //    if (shipment == null)
        //    {
        //        return NotFound();
        //    }

        //    return Ok(shipment);
        //}

        //// PUT: api/shipments/5
        //[ResponseType(typeof(void))]
        //public IHttpActionResult Putshipment(int id, shipment shipment)
        //{
        //    if (!ModelState.IsValid)
        //    {
        //        return BadRequest(ModelState);
        //    }

        //    if (id != shipment.ID)
        //    {
        //        return BadRequest();
        //    }

        //    db.Entry(shipment).State = EntityState.Modified;

        //    try
        //    {
        //        db.SaveChanges();
        //    }
        //    catch (DbUpdateConcurrencyException)
        //    {
        //        if (!shipmentExists(id))
        //        {
        //            return NotFound();
        //        }
        //        else
        //        {
        //            throw;
        //        }
        //    }

        //    return StatusCode(HttpStatusCode.NoContent);
        //}

        //// POST: api/shipments
        //[ResponseType(typeof(shipment))]
        //public IHttpActionResult Postshipment(shipment shipment)
        //{
        //    if (!ModelState.IsValid)
        //    {
        //        return BadRequest(ModelState);
        //    }

        //    db.shipmentModesls.Add(shipment);
        //    db.SaveChanges();

        //    return CreatedAtRoute("DefaultApi", new { id = shipment.ID }, shipment);
        //}

        //// DELETE: api/shipments/5
        //[ResponseType(typeof(shipment))]
        //public IHttpActionResult Deleteshipment(int id)
        //{
        //    shipment shipment = db.shipmentModesls.Find(id);
        //    if (shipment == null)
        //    {
        //        return NotFound();
        //    }

        //    db.shipmentModesls.Remove(shipment);
        //    db.SaveChanges();

        //    return Ok(shipment);
        //}

        //protected override void Dispose(bool disposing)
        //{
        //    if (disposing)
        //    {
        //        db.Dispose();
        //    }
        //    base.Dispose(disposing);
        //}

        //private bool shipmentExists(int id)
        //{
        //    return db.shipmentModesls.Count(e => e.ID == id) > 0;
        //}
    }
}