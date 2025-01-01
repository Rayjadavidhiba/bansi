#include<iostream.h>
#include<conio.h>
class ConstOver
{
   public:
   ConstOver(int grno)
   {
      cout<<"\n GRNO is : "<<grno;
   }
   ConstOver(int grno,char *nm)
   {
      cout<<"\n GRNO is : "<<grno<<" and Student Name is : "<<nm;
   }
};
void main()
{
   clrscr();
   ConstOver Co1(2385);
   ConstOver Co2(2450,"Nidhi");
   getch();
}