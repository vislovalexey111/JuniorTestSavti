# JuniorTestSavti
 A test project for a "Savti" company

Tasks for MS SQL Server (T-SQL) were:
1. Create Data Table and print data
    - Create table "DataTbl" via SQL script with two fields: KeyFld - integer (Primary Key) and DataFld - varchar(20).
    - Fill this table with data
    - Write 2 variants of SQL script to print all the data as a column with rows: <KEY> - <DATA>
2. Print data as a string
    - For the "DataTbl" created and filled above, write SQL script tor print all data table as a string: "<KEY_1> - <DATA_1>, ... , <KEY_N> - <DATA_N>"
3. Change table without direct access
    - Write SQL scripts, that will allow a User (or Group) change table values without GRANT direct access to the table itself.
4. Crate c++ classes
    - Create C++ classes Triangle, Circle and Square, that will contain geometry info: triangle - sides' length, circle - radius, square - lenght of one side. Also, create C++ class for a list, that able to add figures and to print all figures contained.

Answers for those tasks:
1. DataBase1: CreateDataTbl.sql, PrintData.sql, PrintData2.sql
2. DataBase1: PrintDataToString.sql
3. DataBase1: CreateSPChangeDataByKey.sql, DBOwnerScript.sql, NoAccessUserScript.sql
4. HelloWorld
