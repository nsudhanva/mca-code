declare 
    sentence varchar(20) := &sentence;
    word varchar(10);
begin 
    dbms_output.put_line('Before String Op: ');
    dbms_output.put_line(sentence);
    dbms_output.put_line('After Ltrim Op: ');
    dbms_output.put_line(ltrim(sentence));
    dbms_output.put_line('After Rtrim Op: ');
    dbms_output.put_line(rtrim(sentence));
    dbms_output.put_line('After Ttrim Op: ');
    dbms_output.put_line(trim(sentence));
    dbms_output.put_line('After Ttrim Op: ');
    dbms_output.put_line(lower(sentence));
    dbms_output.put_line('After Ttrim Op: ');
    dbms_output.put_line(upper(sentence));
    dbms_output.put_line('Enter string to concat: ');
    word := &word;
    dbms_output.put_line('Concatenated String: ');
    dbms_output.put_line(concat(sentence, word));
end;
/
