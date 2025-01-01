//series 2 5 10 17 26 upto n.
#include<iostream.h>
#include<stdio.h>
void printseries(int n)
{
   int num=2;
   int diff=3;
   for(int i=0;i<n;i++)
   {
      cout<<num<<" ";
      num+=diff;
      diff+=2;
   }
}
int main()
{
   int n;
   cout<<"Enter the Number of terms:";
   cin>>n;
   printseries(n);
   return 0;
}