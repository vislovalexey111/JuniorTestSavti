-- Script execution for database created by default (change DB name if needed)
use Database1
go

create procedure spChangeDataByKey
	@Key int,
	@Data varchar(20)
as begin
	update dbo.DataTbl
	set DataFld = @Data
	where KeyFld = @Key
end