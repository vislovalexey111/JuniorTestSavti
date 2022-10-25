/*
Without direct access to the table (select, update, insert, etc.) you can grant
access to execute Stored Porcedures. This can be done to grant Users very limited
functionality to operate the table in the exactly allowed way by creating
procedures needed and assigning the "executor" role to User or Group. Those example
scripts (DBOwnerScript and NoAccessUserScript) work with the table from the task 1 (DataTbl).
*/

-- Script execution for database created by default (change DB name if needed)
use Database1
go

create login [NAUlog] with password = 'NAUpass'
go

create user NoAccessUser from login [NAUlog]
go

create role dbCanExecuteStoredProcedures
go

grant execute to dbCanExecuteStoredProcedures
go

exec sp_addrolemember 'dbCanExecuteStoredProcedures', 'NoAccessUser'