create table emp
(empno number(6),
ename varchar2(20));

declare
	r_emp emp%rowtype;
	n_emp_id emp.empno%type:=1;
begin
	select * into r_emp from emp where empno=n_emp_id;
	dbms_output.put_line(r_emp.ename);
end;
/
                              or
declare 
	r_emp emp%rowtype;
begin
	select * into r_emp from emp where empno=1;
	dbms_output.put_line(r_emp.empno);
	dbms_output.put_line(r_emp.ename);
end;
/


