-- Script execution for database created by default (change DB name if needed)
use Database1

declare @key int,
		@data varchar(20)

declare db_cursor cursor for select KeyFld, Datafld from DataTbl
open db_cursor
fetch next from db_cursor into @key, @data

if @@FETCH_STATUS = 0 begin
	declare @str varchar(max) = concat(@key, ' - ', @data)
	fetch next from db_cursor into @key, @data

	while @@FETCH_STATUS = 0 begin
		set @str = (select concat(@str, ', ', @key, ' - ', @data))
		fetch next from db_cursor into @key, @data
	end

	print @str
end

close db_cursor
deallocate db_cursor