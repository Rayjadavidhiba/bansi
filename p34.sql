create table customers24
(id number(4),
name varchar2(50),
address varchar2(50),
sal number(6));

declare
	c_id customers24.id%type:=&cc_id;
	c_name customers24.name%type;
	c_addr customers24.address%type;
	ex_invalid_id exception;
begin
	if c_id<=0 then
		raise ex_invalid_id;
	else
	select name,address into c_name,c_addr from customers24 where id=c_id;
	dbms_output.put_line('Name : '||c_name);
	dbms_output.put_line('Address : '||c_addr);
end if;
exception
	when ex_invalid_id then
	dbms_output.put_line('ID must be greater than zero !  ');
	when no_data_found then
	dbms_output.put_line('No Such Customer ! ');
	when others then
	dbms_output.put_line('Error ! ');
end;
/
