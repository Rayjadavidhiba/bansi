create table customers240
(id number(4),
name varchar2(50),
address varchar2(50),
sal number(6));

create function
create or replace function totalCustomers240 return number is
total number(2):=0;
begin
	select count(*) into total from customers240;
	return total;
end;
/

call Function
declare
	c number(2);
begin
	c:=totalCustomers240();
	dbms_output.put_line('Total No. of Customers : '||c);
end;
/