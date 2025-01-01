#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class ArrMem
{
   public:
      int *p;
      ArrMem()
      {
	 p=new int[3];
	 for(int x=0;x<3;x++)
	    p[x]=rand()/100;
	 for(x=0;x<3;x++)
	    cout<<" "<<p[x]<<"\t";
	 delete p;
      }
      ArrMem(int n)
      {
	 p=new int[n];
	 for(int x=0;x<n;x++)
	    p[x]=rand()/100;
	 for(x=0;x<n;x++)
	    cout<<" "<<p[x]<<"\t";
	 delete p;
      }
      ~ArrMem()
      {
	 cout<<"\nHello I Execute to Release Memory...";
      }
};
void main()
{
   clrscr();
   cout<<"Simple Object Calling for Dynamic Constructor...\n";
   ArrMem am1;
   int n;
   cout<<"\nEnter No. of Values : ";   cin>>n;
   ArrMem am2(n);
   cout<<"\nArray Object Calling for Dynamic Constructor...\n";
   ArrMem *am3=new ArrMem[3];
   getch();
}