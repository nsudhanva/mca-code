set serveroutput on
declare
    n number := 10;
    k number;
    x number;
begin
    for i in 1..n loop
        x := n - i;
        for j in 1..x loop
            dbms_output.put(' ');
        end loop; 

        while k != 2 * i - 1 loop
            dbms_output.put('* ');
            k := k + 1;
        end loop;

        dbms_output.put(' ');
    end loop;
end;
/
