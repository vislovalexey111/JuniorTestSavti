/*
To show the effect, as created User (NoAccessUser) we need to launch procedure
after the Data Base Owner created procedure and granted the "executor" role
(dbCanExecuteStoredProcedures). We can also try to cheat by typing

	'select * from dbo.DataTbl'

to make sure that we can't access the table directly.
*/

-- Script execution for database created by default (change DB name if needed)
use Database1

exec spChangeDataByKey @Key = 78, @Data = 'Stars'