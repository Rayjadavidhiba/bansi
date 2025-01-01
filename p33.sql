create table customers24
(id number(4),
name varchar2(50),
address varchar2(50),
sal number(6));

declare
	c_id customers24.id%type:=2;
	c_name customers24.name%type;
	c_addr customers24.address%type;
begin
	select name,address into c_name,c_addr from customers24 where id=c_id;
	dbms_output.put_line('Name : '||c_name);
	dbms_output.put_line('Address : '||c_addr);
exception
	when no_data_found then
	dbms_output.put_line('No Such Customers ! ');
	when too_many_rows then
	dbms_output.put_line('The database returns more than one customer');
	when others then
	dbms_output.put_line('Error ! ');
end;
/

