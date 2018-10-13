set serveroutput on

declare
    n number := &n;
    sumx number := 0;

begin
    for i in 1..n loop 
        if mod(n,i) != 0 then
            sumx := sumx + i;
        end if;
    end loop;
    dbms_output.put_line('Sum: '||sumx);
end;
/