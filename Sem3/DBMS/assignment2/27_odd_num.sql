set serveroutput on

declare
    n number := &n;
begin
    dbms_output.put_line('Odd numbers from 1 to 100: ');
    for i in 1..n loop 
        if mod(n,i) != 0 then
            dbms_output.put_line(i);
        end if;
    end loop;
end;
/