-- Script execution for database created by default (change DB name if needed)
use Database1

declare @key int
declare @data varchar(20)

declare db_cursor cursor for select KeyFld from DataTbl
open db_cursor
fetch next from db_cursor into @key

while @@FETCH_STATUS = 0 begin
	set @data = (select DataFld from DataTbl where KeyFld = @key)
	print concat(@key, ' - ', @data)

	fetch next from db_cursor into @key
end

close db_cursor
deallocate db_cursor