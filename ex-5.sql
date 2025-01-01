function create
run time value   addition ,sub ,multi ,division 

create or replace function abcd(no1 in number,no2 in number) return number is no3 number(8);
begin
	no3:=no1+no2;
	return no3;
	no3:=no1-no2;
	return no3;
	no3:=no1*no2;
	return no3;
	no3:=no1/no2;
	return no3;
	case no3
	when '1' then dbms_output.put_line('Addition : ' || no3);
	when '2' then dbms_output.put_line('Substraction : ' || no3);
	when '3' then dbms_output.put_line('Multiplication : ' || no3);
	when '4' then dbms_output.put_line('Division : ' || no3);
	else
	dbms_output.put_line('Value is Incorrect');
	end case;
end;
/
declare
        no3 number(4):=&no3;
begin
        no3:=abcd(10,20);
end;
/