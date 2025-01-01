#include<iostream.h>
class B {};
class D : public B {};
int main()
{
   B*b=new D;
   D*d=dynamic_cast<D*>(b);
   if(d!=NULL)
      cout<<"Works";
   else
      cout<<"Cannot cast B* to D*";
   getchar();
   return 0;
}