//Series 6 9 14 21 30...upto n
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void printseries(int n)
{
   int a=6;
   int d1=3;
   int d2=5;
   int d=d1;
   clrscr();
   for(int i=0;i<n;i++)
   {
      cout<<a<<" ";
      a+=d;
      if(i%2==0)
      {
	d=d2;
      }
      else
      {
      d=d1;
      }
   }
}
int main()
{
   int n;
   cout<<"Enter the Number of Terms:";
   cin>>n;
   printseries(n);
   return 0;
}