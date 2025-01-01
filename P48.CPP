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
      cout<<"\n Value of C is from Demo C : "<<c;
   }
};
void main()
{
   clrscr();
   DemoC C1;
   C1.a=10;
   C1.c=30;
   C1.displayA();
   C1.displayC();
   DemoB B1;
   B1.a=10;
   B1.b=20;
   B1.displayA();
   B1.displayB();
   getch();
}