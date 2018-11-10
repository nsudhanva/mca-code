create table squareroots (
    num integer,
    sqroot float
);

set serveroutput on

declare
    n number := &n;
begin
    dbms_output.put_line('Numbers from 1 to 100: ');
    for i in 1..n loop 
        insert into squareroots values (i, sqrt(i));
    end loop;
end;
/