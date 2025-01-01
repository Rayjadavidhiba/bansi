//Shell Sort
#include <stdio.h>
#include<iostream.h>
#define size 10
void shellsort(int a[],int n);
void disp(int a[]);
void main()
{
   int data[size],i;
   for(i=0;i<size;i++)
   cin>>"%d ",&data[i];
   cout<<"\n Before sorting...\n";
   disp(data);
   cout<<"\n After sorting...\n";
   shellsort(data,size);
   disp(data);
}
void disp(int a[])
{
   int i;
   for(i=0;i<size;i++)
   cout<<"%d ",a[i];
}
void shellsort(int a[],int n)
{
   //rearrange elementes at each n/2,n/4,n/8....intervals.
   int i,j,interval,tmp;
   for(interval=n/2; interval>0; interval=interval/2)
   {
      for(i=interval; i<n; i++)
      {
	 tmp=a[i];
	 for(j=i; j>=interval && a[j-interval]>tmp; j=j-interval)
	 {
	    a[j]=a[j-interval];
	 }
	 a[j]=tmp;
      }
   }
}
