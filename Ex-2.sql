create table stud
(grno number(4),
name varchar2(50),
sub1 number(2));
101 change sub 1 mark 
insert all
    into stud values(101,'nidhi',90)
    into stud values(102,'bansi',70)
    into stud values(103,'vidhiba',80)
    select * from dual;

create or replace procedure update_record(grno in number,sub1 in number) is
begin
	update stud set sub1=99 where grno=101;
	if sql%found then
	dbms_output.put_line('Record Updated');
	else
	dbms_output.put_line('Record Not Found');
	end if;
end;
/
create or replace trigger upd
before update on stud for each row
begin
	if updating then
	dbms_output.put_line('Record Updated');
	else
	dbms_output.put_line('Record Not Found');
	end if;
end;
/
begin
    update_record(101,'nidhi',99)
    dbms_output.put_line('Record Updated');
    end;
    /