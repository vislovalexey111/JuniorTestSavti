-- Script execution for database created by default (change DB name if needed)
use Database1

declare
	@n int = (select count(*) from DataTbl),
	@i int = 1,
	@key int,
	@data varchar(20);

while @i <= @n begin
	select @key = KeyFld, @data = DataFld
	from (select row_number() over(order by KeyFld) as r, KeyFld, DataFld from DataTbl) d where r = @i

	print concat(@key, ' - ', @data)
	set @i = @i + 1
end