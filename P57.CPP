#include<iostream.h>
#include<conio.h>
class Base
{
   public:
      virtual void display()=0;
};
class Derived : public Base
{
   public:
      virtual void display()
      {
	 cout<<"\n Derived Class";
      }
};
void main()
{
   clrscr();
   Derived B;
   B.display();
   getch();
}