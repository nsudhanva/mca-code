declare
    n number;
    i number;
begin
    n := &n;
    
    for i in 1..10 loop
        dbms_output.put_line(n||' x '||i||' = '||n*i);
    end loop;
end;
/
