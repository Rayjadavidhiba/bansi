create or replace procedure nidhi(n in number) is
no number(2);
begin
	if mod(no,2)=0 then
	dbms_output.put_line('Number is Odd');
	else
	dbms_output.put_line('Number is Even');
	end if;
end;
/

Execute nidhi(6);