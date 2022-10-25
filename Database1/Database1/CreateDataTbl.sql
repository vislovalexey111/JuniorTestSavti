-- Script execution for database created by default (change DB name if needed)
USE Database1
GO

CREATE TABLE [dbo].[DataTbl]
(
	[KeyFld] INT NOT NULL PRIMARY KEY,
	[DataFld] VARCHAR(20) NOT NULL
)
GO

-- Filling table with data to test scripts
INSERT INTO DataTbl VALUES
	(20, 'SUN'),
	(30, 'MOON'),
	(78, 'EARTH'),
	(89, 'JUPITER'),
	(218, 'MARS');