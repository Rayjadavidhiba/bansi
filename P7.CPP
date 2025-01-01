//Series 0 1 1 2 3 5...upto n
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void printfibonacci(int n)
{
   int t1=0,t2=1,nextterm=0;
   clrscr();
   cout<<t1<<" "<<t2<<" ";
   for(int i=0;i<=n;i++)
   {
      nextterm=t1+t2;
      t1=t2;
      t2=nextterm;
      cout<<nextterm<<" ";
   }
}
int main()
{
   int n;
   cout<<"Enter the Number of Terms:";
   cin>>n;
   cout<<"Fibonacci Series upto "<<n<<"terms:";
   printfibonacci(n);
   return 0;
}