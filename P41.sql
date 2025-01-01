create or replace procedure insert_record
(id in number,name in varchar2,age in number) is
begin
	insert into student values(id,name,age);
end;
/

begin 
	insert_record(101,'Riddhi',25);
	dbms_output.put_line('Record Inserted');
end;
/