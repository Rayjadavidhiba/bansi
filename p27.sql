Declare
       a number(3);
begin 
       a:=&a;
       if(a=10) then
           dbms_output.put_line('Value of a is 10');
       elsif(a=20)then
           dbms_output.put_line('Value of a is 20');
       elsif(a=30)then
           dbms_output.put_line('Value of a is 30');
       else
           dbms_output.put_line('None of the Values is Matching');
       end if;
end;
/