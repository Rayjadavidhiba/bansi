//Write a Program Find MAximum and Minimum Value of Three Value.
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   cout<<"\n Enter Value of A :";
   cin>>a;
   cout<<"\n Enter Value of B :";
   cin>>b;
   cout<<"\n Enter Value of C :";
   cin>>c;
   if(a>b && a>c)
   cout<<"\n A is Maximum";
   else if(b>a && b>c)
	  cout<<"\n B is Maximum";
	 else if(c>a && c>b)
		 cout<<"\n C is Maximum";
   if(a<b && a<c)
     cout<<"\n A is Minimum";
   else if(b<a && b<c)
	  cout<<"\n B is Minimum";
	else if(c<a && c<b)
	  cout<<"\n C is Minimum";
}
