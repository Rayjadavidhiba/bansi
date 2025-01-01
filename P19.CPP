//Write a Program to demostrate declaration of class object and Method.
#include<iostream.h>
#include<conio.h>
class Greetings
{
   public:
   char *msg;
   void getdata(char *message)
   {
      msg=message;
   }
   void welcome()
   {
      cout<<"Welcome to the World of C++ OOP..."<<msg;
   }
};
void main()
{
   clrscr();
   Greetings obj;
   char *ch="ANIL";
   obj.getdata(ch);
   obj.welcome();
   getch();
}