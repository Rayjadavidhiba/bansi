#include<iostream.h>
#include<conio.h>
class constmemfunc
{
   public:
      int x,y;
      void input(int a,int b)
      {
	 x=a;
	 y=b;
      }
      int sum() const
      {
	 return(x+y);
      }
};
void main()
{
   constmemfunc cms;
   int a,b;
   cout<<"Enter First Value : ";   cin>>a;
   cout<<"Enter Second Value : ";   cin>>b;
   cms.input(a,b);
   cout<<"Sum of A and B is : "<<cms.sum();
   getch();
}
