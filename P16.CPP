//Write a Program to Demostrate Inline() Function.
#include<iostream.h>
#include<conio.h>
inline void sum(int a, int b)
{
   cout<<"Sum of A and B is : "<<(a+b)<<endl;
}
void main()
{
   clrscr();
   sum(100,200);
   sum(10,20);
   sum(111,222);
   getch();
}