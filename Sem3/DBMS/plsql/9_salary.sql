declare 
    ename varchar(20) := '&ename';
    eno varchar(20) := '&eno';
    salary float := &salary;
    net_salary float;
    da float := 0.41;
    hra float := 0.15;
    pf float;

begin
    if salary < 3000 then
        pf := 0.005;
    elsif salary > 3000 and salary < 5000 then
        pf := 0.007;
    elsif salary > 5000 and salary < 7500 then
        pf := 0.008;
    else
        pf := 0.01;
    end if;

    net_salary := salary + (salary * da) + (salary * hra) + (salary * pf);

    dbms_output.put_line('Employee Name: '||ename);
    dbms_output.put_line('Employee ID: '||eno);
    dbms_output.put_line('Net Salary: '||net_salary);
end;
/
