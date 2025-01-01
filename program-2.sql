Write a PL/SQL block to find Maximum Number among three Numbers.

declare
	a number:=&a;
	b number:=&b;
	c number:=&c;
begin
	if(a>b and a>c) then
	dbms_output.put_line('A is MAximum ' ||a);
	elsif(b>a and b>c) then
	dbms_output.put_line('B is MAximum ' ||b);
	elsif(c>a and c>b) then
	dbms_output.put_line('C is MAximum ' ||c);
	else
	dbms_output.put_line('Incorrect Value ');
	end if;
end;
/