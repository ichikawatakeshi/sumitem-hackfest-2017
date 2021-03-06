/****** SSMS の SelectTopNRows コマンドのスクリプト  ******/
SELECT
	 [emp_id]
      ,[fname]
      ,[minit]
      ,[lname]
      ,[job_id]
      ,[job_lvl]
      ,[pub_id]
      ,[hire_date]
  FROM [pubs].[dbo].[employee]
order by fname
go


MERGE INTO employee AS emp
	USING (SELECT 
		'DAH10002M' as [emp_id],
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
