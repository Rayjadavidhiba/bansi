//Write a Program to demostrate outside function declaration of class.
#include<iostream.h>
#include<conio.h>
class DemoOutside
{
   public:
   char *name;
   void WelcomeUser(char *nm);
   void DisplayUser();
};
void main()
{
   clrscr();
   char *st;
   cout<<"Enter User Name:";
   cin>>st;
   DemoOutside DO;
   DO.WelcomeUser(st);
   DO.DisplayUser();
   getch();
}
void DemoOutside::WelcomeUser(char *nm)
{
   name=nm;
}
void DemoOutside::DisplayUser()
{
   cout<<"Welcome "<<name<<" into the World of Object Oriented Programming...";
}





