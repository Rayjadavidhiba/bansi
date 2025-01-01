//Selection Sorting Using Array...
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#define size 10
void selsort(int a[]);
void disp(int a[]);
void main()
{
   int i,data[size];
   for(i=0;i<size;i++)
    data[i]=rand()%1000;
   cout<<"\n Before Sorting...\n";
   disp(data);
   cout<<"\n After Sorting...\n";
   selsort(data);
   disp(data);
}
void selsort(int a[])
{
   int out,in,min,tmp,count=0;
   for(out=0;out<size-1;out++)
   {
    min=out;
    for(in=out+1;in<size;in++)
    {
     if(a[in]<a[min])
     {
      min=in;
     }
    }
   tmp=a[min];
   a[min]=a[out];
   a[out]=tmp;
   count++;
   }
   cout<<"\n Total Interation %d \n"<<count;
}
void disp(int a[])
{
   int i;
   for(i=0;i<size;i++)
   cout<<" %d"<<a[i];
}