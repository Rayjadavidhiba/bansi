//Merge Sort...
#include<stdio.h>
#include<iostream.h>
#include<alloc.h>
#define size 10
void disp(int a[]);
void mergesort(int a[],int l,int r);//l for left and r right index.
void merge(int a[],int l,int m,int r);//l for left,r right,m mid point.
void main()
{
   int arr[size];
   int i;
   for(i=0;i<size;i++)
   cin>>"%d",&arr[i];
   cout<<"\n Before Sorting...\n";
   disp(arr);
   mergesort(arr,0,size-1);
   cout<<"\n After Sorting...\n";
   disp(arr);
}
void mergesort(int a[],int l,int r)
{
   int mid;
   if(l<r)
   {
    mid=l+(r-l)/2;//Array divide into two sub array.
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);//Merging two sorted sub arry.
    merge(a,l,mid,r);
   }
}
void merge(int a[],int l,int m,int r)
{
   int size1=m-l+1;
   int size2=r-m;
   int*arr1=(int*)malloc(sizeof(int)*size1);
   int*arr2=(int*)malloc(sizeof(int)*size2);
   int i,j,k;
    for(i=0;i<size1;i++)
     arr1[i]=a[l+i];
    for(j=0;j<size2;j++)
     arr2[j]=a[m+1+j];
    i=j=0;
    k=l;
    while(i<size1&&j<size2)
    {
     if(arr1[i]<=arr2[j])
     {
      a[k]=arr1[i];
      i++;
     }
     else
     {
     a[k]=arr2[j];
     j++;
     }
     k++;
    }
    while(i<size1)
    {
     a[k]=arr1[i];
     i++;
     k++;
    }
    while(j<size2)
    {
     a[k]=arr2[j];
     j++;
     k++;
    }
}
void disp(int a[])
{
   int i;
   for(i=0;i<size;i++)
   cout<<" %d"<<a[i];
}

