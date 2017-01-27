using System;
using System.Data.SqlClient;
using System.Configuration;

public static void Run(string myEventHubMessage, TraceWriter log)
{
    log.Info($"C# Event Hub trigger function processed a message: {myEventHubMessage}");

    //var constr = ConfigurationManager.ConnectionStrings["SqlConnection"].ConnectionString;
    var constr = "Server=tcp:dahatakesql.database.windows.net,1433;Initial Catalog=pubs;Persist Security Info=False;User ID=dahatake@dahatakesql;Password=Sedemopass1!;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
    var result = 0;

    using (SqlConnection con = new SqlConnection(constr))
    {
        con.Open();
        SqlCommand sql = new SqlCommand(
            @"MERGE INTO employee AS emp
	USING (SELECT 
		'DAH10001M' as [emp_id],
		'Daiyu01' as [fname],
		'' as [minit],
		'Hatakeyama' as [lname],
		10 as [job_id],
		100 as [job_lvl],
		'0877' as [pub_id],
		'2016-01-01' as [hire_date]
	  	 ) AS source
    ON
    (
       emp.emp_id = source.emp_id
    )
    WHEN MATCHED THEN
        UPDATE SET
             fname = source.fname
    WHEN NOT MATCHED THEN
        INSERT (
			 [emp_id]
		  ,[fname]
		  ,[minit]
		  ,[lname]
		  ,[job_id]
		  ,[job_lvl]
		  ,[pub_id]
		  ,[hire_date]

		)
	    VALUES
		(
			source.[emp_id],
			source.[fname],
			source.[minit],
			source.[lname],
			source.[job_id],
			source.[job_lvl],
			source.[pub_id],
			source.[hire_date]
        );

", con);
        result = sql.ExecuteNonQuery();
    }

    log.Info($"{myEventHubMessage}-result: {result}");
    //if (result == 0)
    //    req.CreateResponse(HttpStatusCode.BadRequest, "Unable to process your request!");
    //else
    //    req.CreateResponse(HttpStatusCode.OK, "Data saved successfully!");

    //return result;

}