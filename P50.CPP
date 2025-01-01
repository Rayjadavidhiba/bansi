#include<iostream.h>
#include<conio.h>
class AccessSpec
{
   private:
      int X;
   protected:
      int Y;
   public:
      int Z;
   AccessSpec()
   {
      X=1;
      Y=2;
      Z=3;
   }
   void display()
   {
      cout<<"\n Value of X is : "<<X;
      cout<<"\n Value of Y is : "<<Y;
      cout<<"\n Value of Z is : "<<Z;
   }
};
class Sub_Class : public AccessSpec
{
   public:
   void displaySubClass()
   {
   // cout<<"\n Sub Class Value of X is : "<<X;
      cout<<"\n Sub Class Value of Y is : "<<Y;
      cout<<"\n Sub Class Value of Z is : "<<Z;
   }
};
void main()
{
   clrscr();
   AccessSpec as;
   as.display();
   // as.X=10;
   // as.Y=20;
   as.Z=30;
   as.display();
   Sub_Class sc;
   sc.displaySubClass();
   // sc.X=100;
   // sc.Y=200;
   sc.Z=300;
   sc.display();
   getch();
}