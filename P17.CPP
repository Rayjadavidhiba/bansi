//Write a Program to Demostrate Inline() Function.
#include<iostream.h>
#include<conio.h>
void sum(int a=10, int b=20)
{
   cout<<"Sum of A and B is : "<<(a+b)<<endl;
}
void main()
{
   clrscr();
   sum(100,200);
   sum(100);
   sum();
   getch();
}