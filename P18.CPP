//Function Overloading...
#include<iostream.h>
#include<conio.h>
void sum(int a,int b,int c)
{
   cout<<"integer Sum of A and B is :"<<(a+b+c)<<endl;
}
void sum(float a,float b)
{
   cout<<"Float Sum of A and B is :"<<(a+b)<<endl;
}
void sum(int a,double b,int c)
{
   cout<<"integer Double Sum of A and B is :"<<(a+b+c)<<endl;
}
void main()
{
   clrscr();
   sum(100,200);
   sum(10.5,5.5);
   sum(2,5,5.5);
   sum(5,5,5);
   getch();
}
