#include<iostream.h>
#include<conio.h>
class stud_info
{
   int age[5];
   char stnm[5][10];
   public:
   void Inputdata()
   {

      for(int x=0;x<5;x++)
      {
	 cout<<" Enter Student Name : ";
	 cin>>stnm[x];
	 cout<<" Enter Student Age : ";
	 cin>>age[x];
      }
   }
   void displaydata()
   {
       for (int x=0;x<=5;x++)
       {
	   cout<<"\n Student Name is "<<stnm[x]<<"and Age is "<<age[x];
       }
   }
};
void main()
{
   clrscr();
   stud_info S1;
   S1.Inputdata();
   S1.displaydata();
   getch();
}