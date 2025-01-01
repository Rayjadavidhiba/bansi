#include<iostream.h>
#include<conio.h>
void main(int ac,char *av[])
{
	clrscr();
	if(ac<0)
	{
			cout<<"Oooooohhhhhh No Arguments...";
	}
	for(int x=1;x<=ac;x++)
	{
		cout<<endl<<ac<<" Argument Value is : "<<av[x];
	}
}