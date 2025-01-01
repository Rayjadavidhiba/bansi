create package 
create function select query(record display),create procedure record insert

create table student24
   (grno number(4),
   name varchar2(20));
insert all
into student24 values(1,'nidhi')
into student24 values(2,'bansi')
into student24 values(3,'vidhi')
select * from dual;

create or replace package pkg_stud is
function display(sno student24.grno%type,nm student24.name%type)return boolean;
procedure  ins_rec(sno student24.grno%type,nm student24.name%type);
end pkg_stud;
/
create or replace package body pkg_stud is 
procedure  ins_rec(sno student24.grno%type,nm student24.name%type) is
begin
	insert into student24 values(sno,nm);
	if sql%found then
			dbms_output.put_line('Record Inserted');
		else
			dbms_output.put_line('Record not Inserted');
		end if;
end ins_rec;
function display(sno student24.grno%type,nm student24.name%type) return boolean is  abc student24%rowtype;
begin
	select * into  abc from student24;
	end display;
end pkg_stud;
/