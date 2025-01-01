create table student24
(rollno number(2),
sname varchar2(50),
age number(2),
course varchar2(15)); 

1) Package Create :-
create or replace package pkg_student is
	procedure updaterecord(sno student24.rollno%type);
	function deleterecord(snm student24.sname%type)
	return boolean;
end pkg_student;
/

2)Package Body :-
create or replace package body pkg_student is
	procedure updaterecord (sno student24.rollno%type) is
begin
	update student24 set age=23 where rollno=sno;
	if  sql%found then
	dbms_output.put_line('Record Updated');
 	else
	dbms_output.put_line('Record Not Found');
	end if;
	end updaterecord;
	function deleterecord(snm student24.sname%type) return boolean is
begin
	delete from student24 where sname=snm;
	return sql%found;
	end deleterecord;
	end pkg_student;
/

3)Calling Procedure and Function used in Package :-
declare
	sno student24.rollno%type;
	s_age student24.age%type;
	snm student24.sname%type;
begin
	sno:=&sno;
	snm:=&snm;
	pkg_student.updaterecord(sno);
	if pkg_student.deleterecord(snm) then
	dbms_output.put_line('Record Deleted');
	else
	dbms_output.put_line('Record Not Found');
	end if;
end;
/