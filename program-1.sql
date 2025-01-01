--Write PL/SQL  Block to get marks of four subjects and calculate total, Percentage and grade.
Above 90 Distinction
70 to 90 First class
60 to 70 Second class
50 to 60 Third class
Belove 50 Fail

declare
	m1 number:=&m1;
	m2 number:=&m2;
	m3 number:=&m3;
	m4 number:=&m4;
	total real;
	percentage real;
	grade char(1);
begin
	total:=m1+m2+m3+m4;
	dbms_output.put_line('Total Marks ' || total);
	percentage:=total/400*100;
	if(percentage>90) then
	dbms_output.put_line('Grade O');
	elsif(percentage>70 and percentage<90)  then
	dbms_output.put_line('Grade A');
	elsif(percentage>60 and percentage<70)  then
	dbms_output.put_line('Grade B');
	elsif(percentage>50 and percentage<60)  then
	dbms_output.put_line('Grade C');
	elsif(percentage<50)  then
	dbms_output.put_line('Fail');
	else
	dbms_output.put_line('Value is Incorrect');
	end if;
end;
/