#include<iostream.h>
#include<string.h>
#include<conio.h>
class time
{
   int hrs,min;
   public:
    time(int t)
    {
       cout<<"Basic Type to ==> Class Type Conversion..."<<endl;
       hrs=t/60;
       min=t%60;
    }
    void display();
};
void time :: display()
{
   cout<<hrs<<" : Hours(s) "<<endl;
   cout<<min<<" Minutes "<<endl;
}
void main()
{
   clrscr();
   int duration;
   cout<<"Enter time duration in Minutes ";
   cin>>duration;
   time t1=duration;
   t1.display();
   getch();
}