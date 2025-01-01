#include<iostream.h>
#include<conio.h>
class Demo
{
   public:
      int val;
      void input(int v)
      {
	 val=v;
      }
};
void main()
{
   Demo p1;
   p1.input(10);
   int *ptr=&p1.val;
   cout<<"\nValue of Pointer : "<<ptr;
   cout<<"\nValue at Pointer : "<<*ptr;
   int Demo :: *p = &Demo :: val;
   cout<<"\n Value of Member Pointer : "<<p1.*p;
   getch();
}
