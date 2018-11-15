declare
    current_date date := SYSDATE;
    today varchar(10);
begin
    dbms_output.put_line(current_date);
    today := to_char(current_date, 'D');
    dbms_output.put_line(today);
    CASE today 
        when '1' then dbms_output.put_line('Sunday'); 
        when '2' then dbms_output.put_line('Monday'); 
        when '3' then dbms_output.put_line('Tuesday'); 
        when '4' then dbms_output.put_line('Wednesday'); 
        when '5' then dbms_output.put_line('Thursday'); 
        when '6' then dbms_output.put_line('Friday'); 
        when '7' then dbms_output.put_line('Satruday'); 
        else dbms_output.put_line('Invalid'); 
    END CASE;
end;
/ 