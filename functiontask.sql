create table student240
   (grno number(4),
   name varchar2(20),
   city varchar2(15));

insert all
into student240 values(1,'nidhi','rajkot')
into student240 values(2,'bansi','surat')
into student240 values(3,'vidhi','rajkot')
select * from dual;

create or replace function update(sno student240.grno%type)is 
begin 
	function update student240 set city='rajkot' where grno=sno;
		if sql%found then
			dbms_output.put_line('Record Updated');
		else
			dbms_output.put_line('Record not Found');
		end if;
end;
/
execute update(2);

create or replace function delete (nm student240.name%type)is
begin
		 delete from student240 where name=nm;
			dbms_output.put_line('Record Deleted');
end;
/
execute delete('vidhi');	
	
