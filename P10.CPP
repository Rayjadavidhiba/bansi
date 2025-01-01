#include <stdio.h>
#include<iostream.h>
int main()
{
	  int n, c, k;
	  cout<<"Enter number of rows\n";
	  cin>>n;

	  for (k = 1; k <= n; k++)
	  {
	    for (c = 1; c <= n-k; c++)
	      cout<<" ";
	      for (c = 1; c <= 2*k-1; c++)
		cout<<"*";
		cout<<"\n";
	   }

	  for (k = 1; k <= n - 1; k++)
	  {
		for (c = 1; c <= k; c++)
		 cout<<" ";
		 for (c = 1 ; c <= 2*(n-k)-1; c++)
		   cout<<"*";
		   cout<<"\n";
	  }

  return 0;
}