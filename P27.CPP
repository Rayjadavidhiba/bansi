#include<iostream.h>
#include<conio.h>
class MyCalc
{
    public:
    int val;
      void inputdata(int v)
      {
	 val=v;
      }
      void sum(MyCalc m1,MyCalc m2)
      {
	 MyCalc m3;
	 m3.val=m1.val+m2.val;
	 return m3;
      }
};
void main()
{
   int value;
   clrscr();
   MyCalc c1,c2,c3,c4;
   cout<<"Enter Value : "; cin>>value;
   c1.inputdata(value);
   cout<<"Enter Value : "; cin>>value;
   c2.inputdata(value);
   c4=c3.sum(c1,c2);
   cout<<"Sum is : "<<c4.val;
   getch();
}