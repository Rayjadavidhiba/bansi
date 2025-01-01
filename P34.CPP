#include<iostream.h>
#include<conio.h>
class DemoA
{
   public:
   DemoA()
   {
      cout<<"\n From DemoA Constructor...";
   }
   void show()
   {
      cout<<"\n Good Afternoon...";
   }
};
class DemoB
{
   public:
   DemoB(DemoA da)
   {
      cout<<"\n From DemoB Constructor...";
      da.show();
   }
   void show()
   {
      cout<<"\n Good Byeee...";
   }
};
void main()
{
   clrscr();
   DemoA da;
   DemoB db(da);
   db.show();
   getch();
}






													
