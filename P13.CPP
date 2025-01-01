#include<iostream.h>
#include<conio.h>
int x,y;
void sum();
void sum1(int,int);
int sum2();
int sum3(int,int);
void main()
{
   clrscr();
   cout<<"\n Enter First Value : ";
   cin>>x;
   cout<<"\n Enter Second Value : ";
   cin>>y;
   sum();
   sum1(x,y);
   cout<<"\n Sum is : "<<sum2();
   cout<<"\n Sum is : "<<sum3(x,y);
   getch();
}
void sum()
{
   cout<<"\n ";
   cout<<"\n Without Argument Without Return";
   cout<<"\n ";
   cout<<"\n Sum is : "<<(x+y);
}
void sum1(int a,int b)
{
   cout<<"\n ";
   cout<<"\n With Argument Without Return";
   cout<<"\n ";
   cout<<"\n Sum is : "<<(a+b);
}
int sum2()
{
   cout<<"\n ";
   cout<<"\n Without Argument With Return";
   cout<<"\n ";
   return (x+y);
}
int sum3(int a,int b)
{
   cout<<"\n ";
   cout<<"\n With Argument With Return";
   cout<<"\n ";
   return (a+b);
}
