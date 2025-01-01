#include<iostream.h>
#include<conio.h>
class ConstOver
{
   public:
   void MathOver(int grno)
   {
      cout<<"\n GRNO is : "<<grno;
   }
   void MathOver(int grno,char *nm)
   {
      cout<<"\n GRNO is : "<<grno<<" and Student Name is : "<<nm;
   }
};
void main()
{
   clrscr();
   ConstOver Co;
   Co.MathOver(2440);
   Co.MathOver(2441,"Nidhi");
   getch();
}