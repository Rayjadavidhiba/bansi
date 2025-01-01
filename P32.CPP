#include<iostream.h>
#include<conio.h>
class ConstructDemo
{
   public:
     ConstructDemo()
     {
	cout<<"\n Good Afternoon From the default Constructor...";
     }
     ConstructDemo(char *a)
     {
	cout<<"\n From Parameterized Constructor Good Byeee..."<<a;
     }
};
void main()
{
   clrscr();
   ConstructDemo cd;
   ConstructDemo cd1("abc");
   getch();
}