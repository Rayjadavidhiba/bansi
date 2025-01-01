#include<iostream.h>
#include<conio.h>
class Stud_Info
{  public:
   int grno;
   char stnm[20],city[15],contactno[10],gender[6];
   void inputdata()
   {
      cout<<"Enter GR No : ";
      cin>>grno;
      cout<<"Enter Student Name : ";
      cin>>stnm;
      cout<<"Enter City : ";
      cin>>city;
      cout<<"Enter Contact Number : ";
      cin>>contactno;
      cout<<"Enter Gender : ";
      cin>>gender;
   }
   void displaydata()
   {
      cout<<"\n "<<grno<<"\t"<<stnm<<"\t\t"<<city<<"\t"<<contactno<<"\t\t"<<gender;
   }
};
void main()
{
   clrscr();
   Stud_Info S[10];
   for(int x=0;x<10;x++)
   {
      S[x].inputdata();
   }
   cout<<"\n GrNo\tStudentName\tCity\tContactNo\tGender";
   for(x=0;x<10;x++)
   {
      S[x].displaydata();
   }
}