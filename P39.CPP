#include<iostream.h>
#include<conio.h>
class ArithOpr
{
   public:
   int a,b;
   void inputdata()
   {
      cout<<"Enter Value of A:"; cin>>a;
      cout<<"Enter Value of B:"; cin>>b;
   }
   ArithOpr operator +(ArithOpr a2)
   {
     ArithOpr a3;
     a3.a=a+a2.a;
     a3.b=b+a2.b;
     return a3;
   }
   void display()
   {
     cout<<"\n Value of A is:"<<a;
     cout<<"\n Value of B is:"<<b;
   }
};
void main()
{
   clrscr();
   ArithOpr a1,a2,a3;
   cout<<"\n Enter First Object Values :"<<endl;
   a1.inputdata();
   cout<<"\n Enter Second Object Values :"<<endl;
   a2.inputdata();
   cout<<"\n First Object Values :"<<endl;
   a1.display();
   cout<<"\n Second Object Values :"<<endl;
   a2.display();
   a3=a1+a2;
   cout<<"\n Third Object Values :"<<endl;
   a3.display();
   getch();
}




