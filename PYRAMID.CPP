#include<iostream.h>
#include<stdio.h>
void main()
{
  int i,j,k,m;
  for(i=1;i<10;i++)
  {
     for(k=10;k>i;k--)
     cout<<" ";
     j=m=i/2;
     if(i%2!=0)
     j=j+1;
     for(k=1;k<=j;k++)
     {
	cout<<"%d",k;
     }
      for(;m>=1;m--)
      {
	cout<<"%d",m;
      }
      cout<<"\n";
  }
}
