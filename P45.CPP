#include<iostream.h>
#include<conio.h>
class DemoA
{
   public:
   int a;
   DemoA()
   {
      cout<<"\n good Afternoon from Demo A Constructor...";
   }
   void displayA()
   {
      cout<<"\n Value of A is from Demo A : "<<a;
   }
};
class DemoB :public DemoA
{
   public:
   int b;
   DemoB()
   {
      cout<<"\n good Afternoon from Demo B Constructor...";
   }
   void displayB()
   {
      cout<<"\n Value of B is from Demo B : "<<b;
   }
};
void main()
{
   clrscr();
   DemoB B1;
   B1.a=100;
   B1.b=200;
   B1.displayA();
   B1.displayB();
   getch();
}