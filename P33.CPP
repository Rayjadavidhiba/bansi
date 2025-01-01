#include<iostream.h>
#include<conio.h>
class ArithConst
{
   public:
      float x,y;
      ArithConst()
      {
	 x=50.5;
	 y=20.5;
      }
      ArithConst(float a)
      {
	 x=a;
	 y=5.5;
      }
      ArithConst(float a,float b)
      {
	 x=a;
	 y=b;
      }
      void calculate()
      {
	 cout<<"\n Addition is : "<<(x+y);
	 cout<<"\n Substraction is : "<<(x-y);
	 cout<<"\n Multiplication is : "<<(x*y);
	 cout<<"\n Division is : "<<(x/y);
	// cout<<"\n Modulus is : "<<(x%y);
      }
};
void main()
{
   clrscr();
   ArithConst ac1;
   ArithConst ac2(5.5);
   ArithConst ac3(10.5,10.5);
   cout<<"\n Default Construction Arithmetic Operation";
   ac1.calculate();
   cout<<"\n Single Value Construction Arithmetic Operation";
   ac2.calculate();
   cout<<"\n Two Value Construction Arithmetic Operation";
   ac3.calculate();
   getch();
}