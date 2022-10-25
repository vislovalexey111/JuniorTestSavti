# JuniorTestSavti
 A test project for a "Savti" company

MS SQL Server (T-SQL) tasks:
1. Create Data Table and print data as a column:
    - Create table "DataTbl" via SQL script with two fields: KeyFld - integer (Primary Key) and DataFld - varchar(20).
    - Fill this table with data
    - Write 2 variants of SQL script, that select all rows with data and print them as a column: "key_n - data_n"
2. Print data as a string:
    - For the "DataTbl" created and filled above, write SQL script to print all data as a string: "key_1 - data_1, ... , key_n - data_n"
3. Change table without direct access:
    - If there is a way, write SQL scripts, that will allow a User (or Group) change table values without GRANT-ing direct access to the table itself.
    - Explain, how it can be used.

C++ tasks:
1. Create C++ classes for figures and list
    - Create C++ classes Triangle, Circle and Square, that will contain geometry info: triangle - lengths of all sides, circle - radius, square - length of one side.
    - Create C++ class for a list, that able to add figures and to print all figures' parameters.

Answers for MS SQL:
1. DataBase1: CreateDataTbl.sql, PrintData.sql, PrintData2.sql
2. DataBase1: PrintDataToString.sql
3. DataBase1: CreateSPChangeDataByKey.sql, DBOwnerScript.sql, NoAccessUserScript.sql

Answer for C++:
1. HelloWorld: All ".h" files