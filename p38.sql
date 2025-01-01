create table emp240
(empno number(6),
ename varchar2(20));

declare
	empid emp240.empno%type;
	empname emp240.ename%type;
begin
	empid:=1001;
	empname:='Riddhi';
	dbms_output.put_line('Employee ID : '||empid);
	dbms_output.put_line('Employee Name : '||empname);
end;
/