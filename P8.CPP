//Bubble Sort...
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#define size 10
void bubsort(int a[]);
void disp(int a[]);
void main()
{
   int i,data[size];
   clrscr();
   for(i=0;i<size;i++)
     data[i] = rand() % 1000;
   cout<<"\n Before Sorting...\n";
   disp(data);
   cout<<"\n After Sorting...\n";
   bubsort(data);
   disp(data);
}
void bubsort(int a[])
{
   int out,in,tmp;
   for(out=size-1;out>=0;out--)
   {
      for(in=0;in<out;in++)
      {
	if(a[in] > a[in+1])
	{
	  tmp = a[in];
	  a[in] = a[in+1];
	  a[in+1] = tmp;
	}
      }
   }
}
void disp(int a[])
{
   int i;
   for(i=0;i<size;i++)
   cout<<" %d"<<a[i];
}