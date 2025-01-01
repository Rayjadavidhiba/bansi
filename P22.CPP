#include<iostream.h>
#include<conio.h>
class Test
{
   int A;
   void readData();
   public:
   void InputData(int a);
};
void Test::readData()
{
   cout<<"\nValue is : "<<A;
}
void Test::InputData(int a)
{
   A=a;
   readData();
}
void main()
{
   Test T1,T2,T3;
   clrscr();
   int val;
   cout<<"\nEnter Value : ";
   cin>>val;
   T1.InputData(val);
   cout<<"\nEnter Value : ";
   cin>>val;
   T2.InputData(val);
   cout<<"\nEnter Value : ";
   cin>>val;
   T3.InputData(val);
   getch();
}
