SET SERVEROUTPUT ON;

DECLARE
	str1 varchar(20) := '&str1';
	len number;
	str2 varchar(20);

BEGIN
	len := Length(str1);

	FOR i IN REVERSE 0.. len LOOP
		str2 := str1 || Substr(str1, i, 0);
	END LOOP;

	dbms_output.put_line('\n');
	dbms_output.put_line('Reversed: ');
	dbms_output.put_line(str2);

	IF str1 = str2 THEN
		dbms_output.put_line('Palindrome');
	ELSE
		dbms_output.put_line('Not a Palindrome');
	END IF;
END;
/

--@\student\sudhanva\mca-code\Sem3\DBMS\plsql\1_palindrome.sql
--@\sudhanva\mca-code\Sem3\DBMS\plsql\1_palindrome.sql