create table customers24
(id number(4),
name varchar2(50),
address varchar2(50),
sal number(6));

declare
	c_id customers24.id%type;
	c_sal customers24.sal%type;
begin
	c_id:=&id;
	select sal into c_sal from customers24 where id=c_id;
	if c_sal is null then
	raise_application_error(-20996,'Sal is Null');
	else
	update customers24 set sal=sal+1000 where id=c_id;
	end if;
end;
/
