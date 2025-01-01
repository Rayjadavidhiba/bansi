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
class DemoB :public DemoA
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
class DemoC :public DemoB
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
void main()
{
   clrscr();
   DemoC C1;
   C1.a=100;
   C1.b=200;
   C1.c=300;
   C1.displayA();
   C1.displayB();
   C1.displayC();
   getch();
}