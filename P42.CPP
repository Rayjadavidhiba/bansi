#include<iostream.h>
#include<conio.h>
class Time
{
   int hrs,min;
   public:
      Time(int a,int b)
      {
	 cout<<"Constructor Called with two Parameters..."<<endl;
	 hrs=a;
	 min=b;
      }
      operator int();
      ~Time()
      {
	 cout<<" Destructor Called..."<<endl;
      }
};
Time :: operator int()
{
   cout<<"Class Type to Basic type Conversion..."<<endl;
   return (hrs*60+min);
}
void main()
{
   clrscr();
   int h,m,duration;
   cout<<"Enter Hours : ";
   cin>>h;
   cout<<"Enter Minutes : ";
   cin>>m;
   Time t(h,m);
   duration=t;
   cout<<"Total Minutes Are "<<duration;
   cout<<" 2nd Method Operator Overloading"<<endl;
   duration=t.operator int();
   cout<<"Total Minutes are "<<duration;
   getch();
}
