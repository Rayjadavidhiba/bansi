create table customers240
(id number(4),
name varchar2(50),
address varchar2(50),
sal number(6));

Create Function
create or replace function adder(n1 in number,n2 in number) return number is n3 number(8);
begin
	n3:=n1+n2;
	return n3;
end;
/

Call Function
declare
	n3 number(2);
begin
	n3:=adder(11,22);
	dbms_output.put_line('Added '||n3);
end;
/
