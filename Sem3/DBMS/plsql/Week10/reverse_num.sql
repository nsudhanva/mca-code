declare
    nx integer := &nx;
    ix integer;
    revx integer := 0;
    rx integer;
begin    
    while nx > 0 loop
        rx := mod(nx, 10);
        revx := revx * 10 + r;
        nx := trunc(nx / 10);
    end loop;
 
    dbms_output.put_line('Reverse is ' || revx);
end;
/
