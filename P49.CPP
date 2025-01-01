#include<iostream.h>
#include<conio.h>
class DemoA
{
   public:
   int a;
   DemoA()
   {
      cout<<"\n Good Afternoon from Demo A Constructor...";
   }
   void displayA()
   {
      cout<<"\n Value of A is from Demo A : "<<a;
   }
};
class DemoB : public DemoA
{
   public:
   int b;
   DemoB()
   {
      cout<<"\n Good Afternoon from Demo B Constructor...";
   }
   void displayB()
   {
      cout<<"\n Value of B is from Demo B : "<<b;
   }
};
class DemoC :public DemoA
{
   public:
   int c;
   DemoC()
   {
      cout<<"\n Good Afternoon from Demo C Constructor...";
   }
   void displayC()
   {
      cout<<"\n Value of B is from Demo C : "<<c;
   }
};
class DemoD :public DemoC
{
   public:
   int d;
   DemoD()
   {
      cout<<"\n Good Afternoon from Demo D Constructor...";
   }
   void displayD()
   {
      cout<<"\n Value of D is from Demo D : "<<d;
   }
};
void main()
{
   clrscr();
   DemoD D1;
   D1.a=10;
   D1.c=30;
   D1.d=40;
   D1.displayA();
   D1.displayC();
   D1.displayD();
   DemoB B1;
   B1.a=10;
   B1.b=20;
   B1.displayA();
   B1.displayB();
   getch();
}