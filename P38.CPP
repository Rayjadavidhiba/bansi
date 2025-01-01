#include<iostream.h>
#include<conio.h>
class Demo
{
   public:
      int x;
      Demo(int a)
      {
	 x=a;
      }
      void display()
      {
	 cout<<"\n Value of X is : "<<x;
      }
      void operator -() { x=-x;  }
      void operator +() { x=+x;  }
      void operator *() { x=x*2; }
};
void main()
{
   clrscr();
   int data;
   cout<<"Enter Value : ";   cin>>data;
   Demo D1(data);
   D1.display();
   -D1;   D1.display();
   +D1;   D1.display();
   *D1;   D1.display();
   getch();
}