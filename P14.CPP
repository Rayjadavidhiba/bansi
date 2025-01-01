//Simple Search in Unoedered Array...
#include<stdio.h>
#include<iostream.h>
#define size 10
void search(int a[]);
void main()
{
   int data[size];
   int i;
   cout<<"\n Enter 10 Integer Value : \n";
	   for(i=0;i<size;i++)
	   cin>>"%d",&data[i];
	   search(data);
}
void search(int a[])
{
   int val,j;
   cout<<"\n Enter Value : ";
   cin>>"%d",&val;
   for(j=0;j<size;j++)
   if(val==a[j])
   {
      cout<<"\n Value Found at %d Position ",j+1;
      return;
   }
   cout<<"\n Value Not Found...";
}
