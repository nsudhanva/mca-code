declare
    a number;
    b number;
    c number;
begin
    dbms_output.put_line('Enter a:');
        a:=&a;
    dbms_output.put_line('Enter b:');
        b:=&b;
    dbms_output.put_line('Enter c:');
        c:=&c;
if (a>b) and (a>c)
    then
    dbms_output.put_line('A is greater: '||a);
elsif (b>a) and (b>c)
    then
    dbms_output.put_line('B is greater: '||b);
else
    dbms_output.put_line('C is greater: '||c );
end if;
end;
/