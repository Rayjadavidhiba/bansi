#include<iostream.h>
#include<conio.h>
class MyCalc
{
    int val;
    public:
      void inputdata(int v)
      {
	 val=v;
      }
      void sum(MyCalc m1,MyCalc m2)
      {
	 cout<<"Sum of Two Class Object Value is : "<<(m1.val+m2.val);
      }
};
void main()
{
   int value;
   clrscr();
   MyCalc c1,c2,c3;
   cout<<"Enter Value : "; cin>>value;
   c1.inputdata(value);
   cout<<"Enter Value : "; cin>>value;
   c2.inputdata(value);
   c3.sum(c1,c2);
   getch();
}