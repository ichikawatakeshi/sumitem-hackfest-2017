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
using WebApplication3.Models;
using Newtonsoft.Json;

namespace WebApplication3.Controllers
{
    public class GT_SYKHEADController : ApiController
    {
        private Model1 db = new Model1();

        // GET: api/GT_SYKHEAD
        public IQueryable<GT_SYKHEAD> GetGT_SYKHEAD()
        {
            return db.GT_SYKHEAD;
        }

        // GET: api/GT_SYKHEAD/5
        [ResponseType(typeof(GT_SYKHEAD))]
        public IHttpActionResult GetGT_SYKHEAD(DateTime id)
        {
            GT_SYKHEAD gT_SYKHEAD = db.GT_SYKHEAD.Find(id);
            if (gT_SYKHEAD == null)
            {
                return NotFound();
            }

            return Ok(gT_SYKHEAD);
        }

        // PUT: api/GT_SYKHEAD/5
        [ResponseType(typeof(void))]
        public IHttpActionResult PutGT_SYKHEAD(DateTime id, GT_SYKHEAD gT_SYKHEAD)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            if (id != gT_SYKHEAD.Eigyobi)
            {
                return BadRequest();
            }

            db.Entry(gT_SYKHEAD).State = EntityState.Modified;

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateConcurrencyException)
            {
                if (!GT_SYKHEADExists(id))
                {
                    return NotFound();
                }
                else
                {
                    throw;
                }
            }

            return StatusCode(HttpStatusCode.NoContent);
        }

        // POST: api/GT_SYKHEAD
        [ResponseType(typeof(GT_SYKHEAD))]
        public IHttpActionResult PostGT_SYKHEAD(GT_SYKHEAD gT_SYKHEAD)
        {
            if (!ModelState.IsValid)
            {
                return BadRequest(ModelState);
            }

            db.GT_SYKHEAD.Add(gT_SYKHEAD);

            try
            {
                db.SaveChanges();
            }
            catch (DbUpdateException)
            {
                if (GT_SYKHEADExists(gT_SYKHEAD.Eigyobi))
                {
                    return Conflict();
                }
                else
                {
                    throw;
                }
            }

            return CreatedAtRoute("DefaultApi", new { id = gT_SYKHEAD.Eigyobi }, gT_SYKHEAD);
        }

        // DELETE: api/GT_SYKHEAD/5
        [ResponseType(typeof(GT_SYKHEAD))]
        public IHttpActionResult DeleteGT_SYKHEAD(DateTime id)
        {
            GT_SYKHEAD gT_SYKHEAD = db.GT_SYKHEAD.Find(id);
            if (gT_SYKHEAD == null)
            {
                return NotFound();
            }

            db.GT_SYKHEAD.Remove(gT_SYKHEAD);
            db.SaveChanges();

            return Ok(gT_SYKHEAD);
        }

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                db.Dispose();
            }
            base.Dispose(disposing);
        }

        private bool GT_SYKHEADExists(DateTime id)
        {
            return db.GT_SYKHEAD.Count(e => e.Eigyobi == id) > 0;
        }
    }
}