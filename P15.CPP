//Binary Search...
#include<stdio.h>
#include<iostream.h>
#define size 10
void selsort(int a[]);
void bsearch(int a[]);
void disp(int a[]);
void main()
{
   int data[size];
   int i;
   cout<<"\n Enter Integer Value\n";
   for(i=0;i<size;i++)
   cin>>" %d",&data[i];
   disp(data);
   selsort(data);
   disp(data);
   bsearch(data);
}
void selsort(int a[])
{
   int out,min,in,tmp,count=0;
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
   cout<<"\n Total Integration %d\n",count;
}
void disp(int a[])
{
   int i;
   for(i=0;i<size;i++)
    cout<<" %d",a[i];
}
void bsearch(int a[])
{
   int val,mid,high,low;
   low=0;high=size-1;
     cout<<"\n Enter Value U Want to Search : ";
     cin>>" %d",&val;
   while(low<=high)
   {
      mid=(low+high)/2;
      if(a[mid]==val)
      {
	cout<<"\n Value Found at %d Position",mid+1;
	return;
      }
      else if(a[mid]>val)
       high=mid-1;
	else
	 low=mid+1;
   }
   cout<<"\n Desired Value not Found...";
}