//Sum of Five Digit...
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
   int val,sum=0,temp=0;
   clrscr();
   cout<<"\n Enter 5 Digit Value : ";
   cin>>val;
   while(val!=0)
   {
      temp=val%10;
      sum=sum+temp;
      val=val/10;
   }
    cout<<"\n Sum is : "<<sum;
}