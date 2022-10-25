-- Script execution for database created by default (change DB name if needed)
use Database1

declare @n int = (select count(*) from DataTbl)
declare @i int = 1
declare @key int
declare @data varchar(20)

while @i <= @n begin
	set @key = (select KeyFld from (select row_number() over(order by KeyFld) as r, KeyFld from DataTbl) d where r = @i)
	set @data = (select DataFld from DataTbl where KeyFld = @key)
	
	print concat(@key, ' - ', @data)
	
	set @i = @i + 1
end