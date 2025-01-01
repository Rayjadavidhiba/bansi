#include<iostream.h>
#include<conio.h>
class Demo
{
   public:
      int x,y;
      void input(int a,int b)
      {
	 x=a;
	 y=b;
      }
      void Addition()
      { cout<<"\n Addition is : "<<(x+y); }
      void Substraction()
      { cout<<"\n Substraction is : "<<(x-y); }
      void Multiplication()
      { cout<<"\n Multiplication is : "<<(x*y); }
      void Division()
      { cout<<"\n Division is : "<<(x/y); }
      void Modulus()
      { cout<<"\n Modulus is : "<<(x%y); }
};
void main()
{
   clrscr();
   int a,b;
   Demo d1;
   Demo *ptrd;
   cout<<"Enter First Value : ";   cin>>a;
   cout<<"Enter Second Value : ";   cin>>b;
   d1.input(a,b);
   d1.Addition();
   d1.Substraction();
   d1.Multiplication();
   d1.Division();
   d1.Modulus();
   cout<<"\n Object Pointer References Variable";
   ptrd=&d1;
   ptrd->Addition();
   ptrd->Substraction();
   ptrd->Multiplication();
   ptrd->Division();
   ptrd->Modulus();
   getch();
}