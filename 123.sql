create a function to calculate simple interest.

write a pl/sql block to create procedure for update and delete record from the table.
table name student:- grno,name,city.
city update , delete record for name 

create or replace function simpleinterest(p in number,r in number,n in number)return number is si number(4);
begin
	si:=p*r*n/100;
	return si;
end;
/
 
declare
	si number(4);
begin
	si:=simpleinterest(1000,2,3);
	dbms_output.put_line('Simple Interest : ' || si);
end;
/


create table student24
   (grno number(4),
   name varchar2(20),
   city varchar2(15));

insert all
into student24 values(1,'nidhi','rajkot')
into student24 values(2,'bansi','surat')
into student24 values(3,'vidhi','rajkot')
select * from dual;

create or replace procedure update_records(sno in number)as
begin 
	update student24 set city='rajkot' where grno=sno;
	
		if sql%found then
			dbms_output.put_line('Record Updated');
		else
			dbms_output.put_line('Record not Found');
		end if;
end;
/
execute update_records(2);

create or replace procedure delete_records(nm in varchar2)is
begin
			 delete from student24 where name=nm;
			dbms_output.put_line('Record Deleted');
end;
/
execute delete_records('vidhi');	
	
