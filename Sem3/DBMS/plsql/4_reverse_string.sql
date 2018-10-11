accept x varchar(20) prompt 'Enter a string: '

DECLARE
	str1 varchar(20) := x;
	len number;
	str2 varchar(20);

BEGIN
	len := Length(str);

	FOR i IN REVERSE 1.. len LOOP
		str2 := str1 || Substr(str1, i, 1);
	END LOOP;

	dbms_output.put_line('Revered String is: ', str2);
END