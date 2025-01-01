#include<iostream.h>
#include<conio.h>
class DemoA
{
   public:
      int a,b;
      void inputdata()
      {
	 cout<<"\n Enter First Value for Sum : ";
	 cin>>a;
	 cout<<"\n Enter Second Value for Sum : ";
	 cin>>b;
      }
      void display()
      {
	 cout<<" Sum of "<<a<<" and "<<b<<" is = "<<(a+b);
      }
};
class DemoB : public DemoA
{
   public:
      void inputdata()
      {
	 DemoA::inputdata();
	 cout<<"\n Enter First Value for Multiplication : ";
	 cin>>a;
	 cout<<"\n Enter Second Value for Multiplication : ";
	 cin>>b;
      }
      void display()
      {
	 DemoA::display();
	 cout<<"\n Multiplication of "<<a<<" and "<<b<<" is = "<<(a*b);
      }
};
void main()
{
   clrscr();
   DemoB db;
   db.inputdata();
   db.display();
   getch();
}