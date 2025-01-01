#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
void main()
{
   struct stud
   {
      int grno;
      float per;
      char *stnm,*result;
   };
   struct stud s1[3];
   clrscr();
   for(int i=0;i<3;i++)
   {
      cout<<"Enter GRNO : ";   cin>>s1[i].grno;
      cout<<"Enter Student Name : ";   cin>>s1[i].stnm;
      cout<<"Enter Percentage : ";   cin>>s1[i].per;
      cout<<"Enter Result : ";   cin>>s1[i].result;
   }
   cout<<setprecision(2);
   cout<<"GRNO"<<setw(20)<<"Student Name"<<setw(30)<<"Percentage"<<setw(20)<<"Result"<<endl;
   for(i=0;i<3;i++)
   {
      cout<<s1[i].grno<<setw(20)<<s1[i].stnm<<setw(30)<<s1[i].per<<setw(20)<<s1[i].result<<endl;
   }
   getch();
}