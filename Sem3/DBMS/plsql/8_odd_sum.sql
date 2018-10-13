set serveroutput on

declare
    n number := &n;
    sum number := 0;

begin
    for i in 1..n loop 
        if mod(n, i) != 0 then
            sum := sum + i;
        end if;
    end loop;
    dbms_output.put_line('Sum: '||sum);
end;
/