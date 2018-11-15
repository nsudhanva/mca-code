DECLARE 
   marks number := &marks; 
BEGIN 
    CASE marks 
        when 
            marks >= 85
        then dbms_output.put_line('A Grade'); 
        when 
            marks >= 75 and marks < 85  
        then dbms_output.put_line('B Grade'); 
        when 
            marks >= 65 and marks < 75 z 
        then dbms_output.put_line('C Grade'); 
        when 
            marks >= 55 and marks < 65   
        then dbms_output.put_line('D Grade'); 
        when
            marks >= 45 and marks < 55  
        then dbms_output.put_line('E Grade'); 
        when
            marks >= 35 and marks < 45  
        then dbms_output.put_line('F Grade'); 
        else dbms_output.put_line('No such grade'); 
    END CASE; 
END; 
/