Declare
       n number:=&n;
begin 
       if mod(n,2)=0
then
       dbms_output.put_line('number is Even');
else
       dbms_output.put_line('number is Odd');
       end if;
end;
/