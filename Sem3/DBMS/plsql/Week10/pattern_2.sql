set serveroutput on
declare
    n number := &n;
begin
    for i in reverse 1..n loop
        for j in 1..i loop
            dbms_output.put('*');
        end loop;
        dbms_output.new_line;
    end loop;
end;
/