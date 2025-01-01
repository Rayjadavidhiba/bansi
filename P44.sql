create table emp
(id number(4),
name varchar2(50),
salary number(50));

create or replace trigger dml_tri before insert or update or delete on emp for each row
begin
	case
		when inserting then
			dbms_output.put_line('Record Inserted');
		when updating then
			dbms_output.put_line('Record Updated');
		when deleting then
			dbms_output.put_line('Record Deleted');
	end case;
end;
/
