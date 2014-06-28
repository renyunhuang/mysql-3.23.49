/*
 * Copyright (C) 2000 MySQL AB & MySQL Finland AB & TCX DataKonsult AB
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* Written by Sergei A. Golubchik, who has a shared copyright to this code */

#define NUPD            20
#define NDATAS          389
struct {
	const char     *f0, *f2;
}		data         [NDATAS] = {
	{
		"1", "General Information about MySQL"
	},
	{
		"1.1", "What is MySQL?"
	},
	{
		"1.2", "About this manual"
	},
	{
		"1.3", "History of MySQL"
	},
	{
		"1.4", "The main features of MySQL"
	},
	{
		"1.5", "General SQL information and tutorials"
	},
	{
		"1.6", "Useful MySQL-related links"
	},
	{
		"1.7", "What are stored procedures and triggers and so on?"
	},
	{
		"2", "MySQL mailing lists and how to ask questions/give error (bug) reports"
	},
	{
		"2.1", "Subscribing to/un-subscribing from the MySQL mailing list"
	},
	{
		"2.2", "Asking questions or reporting bugs"
	},
	{
		"2.3", "I think I have found a bug. What information do you need to help me?"
	},
	{
		"2.3.1", "MySQL keeps crashing"
	},
	{
		"2.4", "Guidelines for answering questions on the mailing list"
	},
	{
		"3", "Licensing or When do I have/want to pay for MySQL?"
	},
	{
		"3.1", "How much does MySQL cost?"
	},
	{
		"3.2", "How do I get commercial support?"
	},
	{
		"3.2.1", "Types of commercial support"
	},
	{
		"3.2.1.1", "Basic email support"
	},
	{
		"3.2.1.2", "Extended email support"
	},
	/*------------------------------- NUPD=20 -------------------------------*/
	{
		"3.2.1.3", "Asking: Login support"
	},
	{
		"3.2.1.4", "Extended login support"
	},
	{
		"3.3", "How do I pay for licenses/support?"
	},
	{
		"3.4", "Who do I contact when I want more information about licensing/support?"
	},
	{
		"3.5", "What Copyright does MySQL use?"
	},
	{
		"3.6", "When may I distribute MySQL commercially without a fee?"
	},
	{
		"3.7", "I want to sell a product that can be configured to use MySQL"
	},
	{
		"3.8", "I am running a commercial web server using MySQL"
	},
	{
		"3.9", "Do I need a license to sell commercial Perl/tcl/PHP/Web+ etc applications?"
	},
	{
		"3.10", "Possible future changes in the licensing"
	},
	{
		"4", "Compiling and installing MySQL"
	},
	{
		"4.1", "How do I get MySQL?"
	},
	{
		"4.2", "Which MySQL version should I use?"
	},
	{
		"4.3", "How/when will you release updates?"
	},
	{
		"4.4", "What operating systems does MySQL support?"
	},
	{
		"4.5", "Compiling MySQL from source code"
	},
	{
		"4.5.1", "Quick installation overview"
	},
	{
		"4.5.2", "Usual configure switches"
	},
	{
		"4.5.3", "Applying a patch"
	},
	{
		"4.6", "Problems compiling?"
	},
	{
		"4.7", "General compilation notes"
	},
	{
		"4.8", "MIT-pthreads notes (FreeBSD)"
	},
	{
		"4.9", "Perl installation comments"
	},
	{
		"4.10", "Special things to consider for some machine/OS combinations"
	},
	{
		"4.10.1", "Solaris notes"
	},
	{
		"4.10.2", "SunOS 4 notes"
	},
	{
		"4.10.3", "Linux notes for all versions"
	},
	{
		"4.10.3.1", "Linux-x86 notes"
	},
	{
		"4.10.3.2", "RedHat 5.0"
	},
	{
		"4.10.3.3", "RedHat 5.1"
	},
	{
		"4.10.3.4", "Linux-Sparc notes"
	},
	{
		"4.10.3.5", "Linux-Alpha notes"
	},
	{
		"4.10.3.6", "MkLinux notes"
	},
	{
		"4.10.4", "Alpha-DEC-Unix notes"
	},
	{
		"4.10.5", "Alpha-DEC-OSF1 notes"
	},
	{
		"4.10.6", "SGI-IRIX notes"
	},
	{
		"4.10.7", "FreeBSD notes"
	},
	{
		"4.10.7.1", "FreeBSD-3.0 notes"
	},
	{
		"4.10.8", "BSD/OS 2.# notes"
	},
	{
		"4.10.8.1", "BSD/OS 3.# notes"
	},
	{
		"4.10.9", "SCO notes"
	},
	{
		"4.10.10", "SCO Unixware 7.0 notes"
	},
	{
		"4.10.11", "IBM-AIX notes"
	},
	{
		"4.10.12", "HP-UX notes"
	},
	{
		"4.11", "TcX binaries"
	},
	{
		"4.12", "Win32 notes"
	},
	{
		"4.13", "Installation instructions for MySQL binary releases"
	},
	{
		"4.13.1", "How to get MySQL Perl support working"
	},
	{
		"4.13.2", "Linux notes"
	},
	{
		"4.13.3", "HP-UX notes"
	},
	{
		"4.13.4", "Linking client libraries"
	},
	{
		"4.14", "Problems running mysql_install_db"
	},
	{
		"4.15", "Problems starting MySQL"
	},
	{
		"4.16", "Automatic start/stop of MySQL"
	},
	{
		"4.17", "Option files"
	},
	{
		"5", "How standards-compatible is MySQL?"
	},
	{
		"5.1", "What extensions has MySQL to ANSI SQL92?"
	},
	{
		"5.2", "What functionality is missing in MySQL?"
	},
	{
		"5.2.1", "Sub-selects"
	},
	{
		"5.2.2", "SELECT INTO TABLE"
	},
	{
		"5.2.3", "Transactions"
	},
	{
		"5.2.4", "Triggers"
	},
	{
		"5.2.5", "Foreign Keys"
	},
	{
		"5.2.5.1", "Some reasons NOT to use FOREIGN KEYS"
	},
	{
		"5.2.6", "Views"
	},
	{
		"5.2.7", "-- as start of a comment"
	},
	{
		"5.3", "What standards does MySQL follow?"
	},
	{
		"5.4", "What functions exist only for compatibility?"
	},
	{
		"5.5", "Limitations of BLOB and TEXT types"
	},
	{
		"5.6", "How to cope without COMMIT-ROLLBACK"
	},
	{
		"6", "The MySQL access privilege system"
	},
	{
		"6.1", "What the privilege system does"
	},
	{
		"6.2", "Connecting to the MySQL server"
	},
	{
		"6.2.1", "Keeping your password secure"
	},
	{
		"6.3", "Privileges provided by MySQL"
	},
	{
		"6.4", "How the privilege system works"
	},
	{
		"6.5", "The privilege tables"
	},
	{
		"6.6", "Setting up the initial MySQL privileges"
	},
	{
		"6.7", "Adding new user privileges to MySQL"
	},
	{
		"6.8", "An example permission setup"
	},
	{
		"6.9", "Causes of Access denied errors"
	},
	{
		"6.10", "How to make MySQL secure against crackers"
	},
	{
		"7", "MySQL language reference"
	},
	{
		"7.1", "Literals: how to write strings and numbers"
	},
	{
		"7.1.1", "Strings"
	},
	{
		"7.1.2", "Numbers"
	},
	{
		"7.1.3", "NULL values"
	},
	{
		"7.1.4", "Database, table, index, column and alias names"
	},
	{
		"7.1.4.1", "Case sensitivity in names"
	},
	{
		"7.2", "Column types"
	},
	{
		"7.2.1", "Column type storage requirements"
	},
	{
		"7.2.5", "Numeric types"
	},
	{
		"7.2.6", "Date and time types"
	},
	{
		"7.2.6.1", "The DATE type"
	},
	{
		"7.2.6.2", "The TIME type"
	},
	{
		"7.2.6.3", "The DATETIME type"
	},
	{
		"7.2.6.4", "The TIMESTAMP type"
	},
	{
		"7.2.6.5", "The YEAR type"
	},
	{
		"7.2.6.6", "Miscellaneous date and time properties"
	},
	{
		"7.2.7", "String types"
	},
	{
		"7.2.7.1", "The CHAR and VARCHAR types"
	},
	{
		"7.2.7.2", "The BLOB and TEXT types"
	},
	{
		"7.2.7.3", "The ENUM type"
	},
	{
		"7.2.7.4", "The SET type"
	},
	{
		"7.2.8", "Choosing the right type for a column"
	},
	{
		"7.2.9", "Column indexes"
	},
	{
		"7.2.10", "Multiple-column indexes"
	},
	{
		"7.2.11", "Using column types from other database engines"
	},
	{
		"7.3", "Functions for use in SELECT and WHERE clauses"
	},
	{
		"7.3.1", "Grouping functions"
	},
	{
		"7.3.2", "Normal arithmetic operations"
	},
	{
		"7.3.3", "Bit functions"
	},
	{
		"7.3.4", "Logical operations"
	},
	{
		"7.3.5", "Comparison operators"
	},
	{
		"7.3.6", "String comparison functions"
	},
	{
		"7.3.7", "Control flow functions"
	},
	{
		"7.3.8", "Mathematical functions"
	},
	{
		"7.3.9", "String functions"
	},
	{
		"7.3.10", "Date and time functions"
	},
	{
		"7.3.11", "Miscellaneous functions"
	},
	{
		"7.3.12", "Functions for use with GROUP BY clauses"
	},
	{
		"7.4", "CREATE DATABASE syntax"
	},
	{
		"7.5", "DROP DATABASE syntax"
	},
	{
		"7.6", "CREATE TABLE syntax"
	},
	{
		"7.7", "ALTER TABLE syntax"
	},
	{
		"7.8", "OPTIMIZE TABLE syntax"
	},
	{
		"7.9", "DROP TABLE syntax"
	},
	{
		"7.10", "DELETE syntax"
	},
	{
		"7.11", "SELECT syntax"
	},
	{
		"7.12", "JOIN syntax"
	},
	{
		"7.13", "INSERT syntax"
	},
	{
		"7.14", "REPLACE syntax"
	},
	{
		"7.15", "LOAD DATA INFILE syntax"
	},
	{
		"7.16", "UPDATE syntax"
	},
	{
		"7.17", "USE syntax"
	},
	{
		"7.18", "SHOW syntax (Get information about tables, columns...)"
	},
	{
		"7.19", "EXPLAIN syntax (Get information about a SELECT)"
	},
	{
		"7.20", "DESCRIBE syntax (Get information about columns)"
	},
	{
		"7.21", "LOCK TABLES/UNLOCK TABLES syntax"
	},
	{
		"7.22", "SET OPTION syntax"
	},
	{
		"7.23", "GRANT syntax (Compatibility function)"
	},
	{
		"7.24", "CREATE INDEX syntax (Compatibility function)"
	},
	{
		"7.25", "DROP INDEX syntax (Compatibility function)"
	},
	{
		"7.26", "Comment syntax"
	},
	{
		"7.27", "CREATE FUNCTION/DROP FUNCTION syntax"
	},
	{
		"7.28", "Is MySQL picky about reserved words?"
	},
	{
		"8", "Example SQL queries"
	},
	{
		"8.1", "Queries from twin project"
	},
	{
		"8.1.1", "Find all non-distributed twins"
	},
	{
		"8.1.2", "Show a table on twin pair status"
	},
	{
		"9", "How safe/stable is MySQL?"
	},
	{
		"9.1", "How stable is MySQL?"
	},
	{
		"9.2", "Why are there is so many releases of MySQL?"
	},
	{
		"9.3", "Checking a table for errors"
	},
	{
		"9.4", "How to repair tables"
	},
	{
		"9.5", "Is there anything special to do when upgrading/downgrading MySQL?"
	},
	{
		"9.5.1", "Upgrading from a 3.21 version to 3.22"
	},
	{
		"9.5.2", "Upgrading from a 3.20 version to 3.21"
	},
	{
		"9.5.3", "Upgrading to another architecture"
	},
	{
		"9.6", "Year 2000 compliance"
	},
	{
		"10", "MySQL Server functions"
	},
	{
		"10.1", "What languages are supported by MySQL?"
	},
	{
		"10.1.1", "Character set used for data &#38; sorting"
	},
	{
		"10.2", "The update log"
	},
	{
		"10.3", "How big can MySQL tables be?"
	},
	{
		"11", "Getting maximum performance from MySQL"
	},
	{
		"11.1", "How does one change the size of MySQL buffers?"
	},
	{
		"11.2", "How compiling and linking affects the speed of MySQL"
	},
	{
		"11.3", "How does MySQL use memory?"
	},
	{
		"11.4", "How does MySQL use indexes?"
	},
	{
		"11.5", "What optimizations are done on WHERE clauses?"
	},
	{
		"11.6", "How does MySQL open &#38; close tables?"
	},
	{
		"11.6.0.1", "What are the drawbacks of creating possibly thousands of tables in a database?"
	},
	{
		"11.7", "How does MySQL lock tables?"
	},
	{
		"11.8", "How should I arrange my table to be as fast/small as possible?"
	},
	{
		"11.9", "What affects the speed of INSERT statements?"
	},
	{
		"11.10", "What affects the speed DELETE statements?"
	},
	{
		"11.11", "How do I get MySQL to run at full speed?"
	},
	{
		"11.12", "What are the different row formats? Or, when should VARCHAR/CHAR be used?"
	},
	{
		"11.13", "Why so many open tables?"
	},
	{
		"12", "MySQL benchmark suite"
	},
	{
		"13", "MySQL Utilites"
	},
	{
		"13.1", "Overview of the different MySQL programs"
	},
	{
		"13.2", "The MySQL table check, optimize and repair program"
	},
	{
		"13.2.1", "isamchk memory use"
	},
	{
		"13.2.2", "Getting low-level table information"
	},
	{
		"13.3", "The MySQL compressed read-only table generator"
	},
	{
		"14", "Adding new functions to MySQL"
	},
	{
		"15", "MySQL ODBC Support"
	},
	{
		"15.1", "Operating systems supported by MyODBC"
	},
	{
		"15.2", "How to report problems with MyODBC"
	},
	{
		"15.3", "Programs known to work with MyODBC"
	},
	{
		"15.4", "How to fill in the various fields in the ODBC administrator program"
	},
	{
		"15.5", "How to get the value of an AUTO_INCREMENT column in ODBC"
	},
	{
		"16", "Problems and common errors"
	},
	{
		"16.1", "Some common errors when using MySQL"
	},
	{
		"16.1.1", "MySQL server has gone away error"
	},
	{
		"16.1.2", "Can't connect to local MySQL server error"
	},
	{
		"16.1.3", "Out of memory error"
	},
	{
		"16.1.4", "Packet too large error"
	},
	{
		"16.1.5", "The table is full error"
	},
	{
		"16.1.6", "Commands out of sync error in client"
	},
	{
		"16.1.7", "Removing user error"
	},
	{
		"16.2", "How MySQL handles a full disk"
	},
	{
		"16.3", "How to run SQL commands from a text file"
	},
	{
		"16.4", "Where MySQL stores temporary files"
	},
	{
		"16.5", "Access denied error"
	},
	{
		"16.6", "How to run MySQL as a normal user"
	},
	{
		"16.7", "Problems with file permissions"
	},
	{
		"16.8", "File not found"
	},
	{
		"16.9", "Problems using DATE columns"
	},
	{
		"16.10", "Case sensitivity in searches"
	},
	{
		"16.11", "Problems with NULL values"
	},
	{
		"17", "Solving some common problems with MySQL"
	},
	{
		"17.1", "Database replication"
	},
	{
		"17.2", "Database backups"
	},
	{
		"18", "MySQL client tools and API's"
	},
	{
		"18.1", "MySQL C API"
	},
	{
		"18.2", "C API datatypes"
	},
	{
		"18.3", "C API function overview"
	},
	{
		"18.4", "C API function descriptions"
	},
	{
		"18.4.1", "mysql_affected_rows()"
	},
	{
		"18.4.2", "mysql_close()"
	},
	{
		"18.4.3", "mysql_connect()"
	},
	{
		"18.4.4", "mysql_create_db()"
	},
	{
		"18.4.5", "mysql_data_seek()"
	},
	{
		"18.4.6", "mysql_debug()"
	},
	{
		"18.4.7", "mysql_drop_db()"
	},
	{
		"18.4.8", "mysql_dump_debug_info()"
	},
	{
		"18.4.9", "mysql_eof()"
	},
	{
		"18.4.10", "mysql_errno()"
	},
	{
		"18.4.11", "mysql_error()"
	},
	{
		"18.4.12", "mysql_escape_string()"
	},
	{
		"18.4.13", "mysql_fetch_field()"
	},
	{
		"18.4.14", "mysql_fetch_fields()"
	},
	{
		"18.4.15", "mysql_fetch_field_direct()"
	},
	{
		"18.4.16", "mysql_fetch_lengths()"
	},
	{
		"18.4.17", "mysql_fetch_row()"
	},
	{
		"18.4.18", "mysql_field_seek()"
	},
	{
		"18.4.19", "mysql_field_tell()"
	},
	{
		"18.4.20", "mysql_free_result()"
	},
	{
		"18.4.21", "mysql_get_client_info()"
	},
	{
		"18.4.22", "mysql_get_host_info()"
	},
	{
		"18.4.23", "mysql_get_proto_info()"
	},
	{
		"18.4.24", "mysql_get_server_info()"
	},
	{
		"18.4.25", "mysql_info()"
	},
	{
		"18.4.26", "mysql_init()"
	},
	{
		"18.4.27", "mysql_insert_id()"
	},
	{
		"18.4.28", "mysql_kill()"
	},
	{
		"18.4.29", "mysql_list_dbs()"
	},
	{
		"18.4.30", "mysql_list_fields()"
	},
	{
		"18.4.31", "mysql_list_processes()"
	},
	{
		"18.4.32", "mysql_list_tables()"
	},
	{
		"18.4.33", "mysql_num_fields()"
	},
	{
		"18.4.34", "mysql_num_rows()"
	},
	{
		"18.4.35", "mysql_query()"
	},
	{
		"18.4.36", "mysql_real_connect()"
	},
	{
		"18.4.37", "mysql_real_query()"
	},
	{
		"18.4.38", "mysql_reload()"
	},
	{
		"18.4.39", "mysql_row_tell()"
	},
	{
		"18.4.40", "mysql_select_db()"
	},
	{
		"18.4.41", "mysql_shutdown()"
	},
	{
		"18.4.42", "mysql_stat()"
	},
	{
		"18.4.43", "mysql_store_result()"
	},
	{
		"18.4.44", "mysql_thread_id()"
	},
	{
		"18.4.45", "mysql_use_result()"
	},
	{
		"18.4.46", "Why is it that after mysql_query() returns success, mysql_store_result() sometimes returns NULL?"
	},
	{
		"18.4.47", "What results can I get from a query?"
	},
	{
		"18.4.48", "How can I get the unique ID for the last inserted row?"
	},
	{
		"18.4.49", "Problems linking with the C API"
	},
	{
		"18.4.50", "How to make a thread-safe client"
	},
	{
		"18.5", "MySQL Perl API's"
	},
	{
		"18.5.1", "DBI with DBD::mysql"
	},
	{
		"18.5.1.1", "The DBI interface"
	},
	{
		"18.5.1.2", "More DBI/DBD information"
	},
	{
		"18.6", "MySQL Java connectivity (JDBC)"
	},
	{
		"18.7", "MySQL PHP API's"
	},
	{
		"18.8", "MySQL C++ API's"
	},
	{
		"18.9", "MySQL Python API's"
	},
	{
		"18.10", "MySQL TCL API's"
	},
	{
		"19", "How MySQL compares to other databases"
	},
	{
		"19.1", "How MySQL compares to mSQL"
	},
	{
		"19.1.1", "How to convert mSQL tools for MySQL"
	},
	{
		"19.1.2", "How mSQL and MySQL client/server communications protocols differ"
	},
	{
		"19.1.3", "How mSQL 2.0 SQL syntax differs from MySQL"
	},
	{
		"19.2", "How MySQL compares to PostgreSQL"
	},
	{
		"A", "Some users of MySQL"
	},
	{
		"B", "Contributed programs"
	},
	{
		"C", "Contributors to MySQL"
	},
	{
		"D", "MySQL change history"
	},
	{
		"19.3", "Changes in release 3.22.x (Alpha version)"
	},
	{
		"19.3.1", "Changes in release 3.22.7"
	},
	{
		"19.3.2", "Changes in release 3.22.6"
	},
	{
		"19.3.3", "Changes in release 3.22.5"
	},
	{
		"19.3.4", "Changes in release 3.22.4"
	},
	{
		"19.3.5", "Changes in release 3.22.3"
	},
	{
		"19.3.6", "Changes in release 3.22.2"
	},
	{
		"19.3.7", "Changes in release 3.22.1"
	},
	{
		"19.3.8", "Changes in release 3.22.0"
	},
	{
		"19.4", "Changes in release 3.21.x"
	},
	{
		"19.4.1", "Changes in release 3.21.33"
	},
	{
		"19.4.2", "Changes in release 3.21.32"
	},
	{
		"19.4.3", "Changes in release 3.21.31"
	},
	{
		"19.4.4", "Changes in release 3.21.30"
	},
	{
		"19.4.5", "Changes in release 3.21.29"
	},
	{
		"19.4.6", "Changes in release 3.21.28"
	},
	{
		"19.4.7", "Changes in release 3.21.27"
	},
	{
		"19.4.8", "Changes in release 3.21.26"
	},
	{
		"19.4.9", "Changes in release 3.21.25"
	},
	{
		"19.4.10", "Changes in release 3.21.24"
	},
	{
		"19.4.11", "Changes in release 3.21.23"
	},
	{
		"19.4.12", "Changes in release 3.21.22"
	},
	{
		"19.4.13", "Changes in release 3.21.21a"
	},
	{
		"19.4.14", "Changes in release 3.21.21"
	},
	{
		"19.4.15", "Changes in release 3.21.20"
	},
	{
		"19.4.16", "Changes in release 3.21.19"
	},
	{
		"19.4.17", "Changes in release 3.21.18"
	},
	{
		"19.4.18", "Changes in release 3.21.17"
	},
	{
		"19.4.19", "Changes in release 3.21.16"
	},
	{
		"19.4.20", "Changes in release 3.21.15"
	},
	{
		"19.4.21", "Changes in release 3.21.14b"
	},
	{
		"19.4.22", "Changes in release 3.21.14a"
	},
	{
		"19.4.23", "Changes in release 3.21.13"
	},
	{
		"19.4.24", "Changes in release 3.21.12"
	},
	{
		"19.4.25", "Changes in release 3.21.11"
	},
	{
		"19.4.26", "Changes in release 3.21.10"
	},
	{
		"19.4.27", "Changes in release 3.21.9"
	},
	{
		"19.4.28", "Changes in release 3.21.8"
	},
	{
		"19.4.29", "Changes in release 3.21.7"
	},
	{
		"19.4.30", "Changes in release 3.21.6"
	},
	{
		"19.4.31", "Changes in release 3.21.5"
	},
	{
		"19.4.32", "Changes in release 3.21.4"
	},
	{
		"19.4.33", "Changes in release 3.21.3"
	},
	{
		"19.4.34", "Changes in release 3.21.2"
	},
	{
		"19.4.35", "Changes in release 3.21.0"
	},
	{
		"19.5", "Changes in release 3.20.x"
	},
	{
		"19.5.1", "Changes in release 3.20.18"
	},
	{
		"19.5.2", "Changes in release 3.20.17"
	},
	{
		"19.5.3", "Changes in release 3.20.16"
	},
	{
		"19.5.4", "Changes in release 3.20.15"
	},
	{
		"19.5.5", "Changes in release 3.20.14"
	},
	{
		"19.5.6", "Changes in release 3.20.13"
	},
	{
		"19.5.7", "Changes in release 3.20.11"
	},
	{
		"19.5.8", "Changes in release 3.20.10"
	},
	{
		"19.5.9", "Changes in release 3.20.9"
	},
	{
		"19.5.10", "Changes in release 3.20.8"
	},
	{
		"19.5.11", "Changes in release 3.20.7"
	},
	{
		"19.5.12", "Changes in release 3.20.6"
	},
	{
		"19.5.13", "Changes in release 3.20.3"
	},
	{
		"19.5.14", "Changes in release 3.20.0"
	},
	{
		"19.6", "Changes in release 3.19.x"
	},
	{
		"19.6.1", "Changes in release 3.19.5"
	},
	{
		"19.6.2", "Changes in release 3.19.4"
	},
	{
		"19.6.3", "Changes in release 3.19.3"
	},
	{
		"E", "Known errors and design deficiencies in MySQL"
	},
	{
		"F", "List of things we want to add to MySQL in the future (The TODO)"
	},
	{
		"19.7", "Things that must done in the real near future"
	},
	{
		"19.8", "Things that have to be done sometime"
	},
	{
		"19.9", "Some things we don't have any plans to do"
	},
	{
		"G", "Comments on porting to other systems"
	},
	{
		"19.10", "Debugging MySQL"
	},
	{
		"19.11", "Comments about RTS threads"
	},
	{
		"19.12", "What is the difference between different thread packages?"
	},
	{
		"H", "Description of MySQL regular expression syntax"
	},
	{
		"I", "What is Unireg?"
	},
	{
		"J", "The MySQL server license"
	},
	{
		"K", "The MySQL license for Microsoft operating systems"
	},
	{
		"*", "SQL command, type and function index"
	},
	{
		"*", "Concept Index"
	}
};

#define NQUERIES 5
const char     *query[NQUERIES] = {
	"mysql information and manual",
	"upgrading from previous version",
	"column indexes",
	"against about after more right the with/without",	/* stopwords test */
	"mysql license and copyright"
};
