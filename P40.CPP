#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class ShiftDemo
{
   public:
     void operator<<(char*c)
     {
	 puts(c);
	 puts(".....Good Bye.....");
     }
     void operator>>(char*c)
     {
	puts(c);
	puts(".....Good Bye.....");
     }
};
void main()
{
   ShiftDemo cout,cin;
   char*data;
   cout<<"Enter Value : ";
   gets(data);
   clrscr();
   cout<<"\n Good Afternoon\n";
   cin>>data;
   getch();
}





													
