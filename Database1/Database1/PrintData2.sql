-- Script execution for database created by default (change DB name if needed)
use Database1

declare
	@key int,
	@data varchar(20)

declare db_cursor cursor for select KeyFld, DataFld from DataTbl
open db_cursor
fetch next from db_cursor into @key, @data

while @@FETCH_STATUS = 0 begin
	print concat(@key, ' - ', @data)
	fetch next from db_cursor into @key, @data
end

close db_cursor
deallocate db_cursor