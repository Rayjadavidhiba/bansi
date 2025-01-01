#include<iostream.h>
#include<conio.h>
class MemVar
{
   public:
   char *str;
   MemVar()
   {
      str=new char[6];
      str="BCA-3";
   }
   void display()
   {
      cout<<"Dynamic Variable Data is : "<<str<<endl;
   }
};
int main()
{
   MemVar mv;
   cout<<"\n Good Afternoon...";
   mv.display();
   return 0;
}







													
