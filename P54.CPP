#include<iostream.h>
#include<conio.h>
class Base
{
   public:
      void display(int x=10)
      {
	 cout<<"\n Base Class Value of X = "<<x;
      }
};
class Derived : public Base
{
   public:
      void display(int x=100)
      {
	 cout<<"\n Derived Class Value of X = "<<x;
      }
};
void main()
{
   clrscr();
   Base *B=new Derived();
   B->display();
   B->display(1000);
   getch();
}