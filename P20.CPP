#include<iostream.h>
#include<conio.h>
class ArithOper
{
   int FirstVal,SecondVal;
   public:
   void InputData(int first,int second)
   {
      FirstVal=first;
      SecondVal=second;
   }
   void Addition()
   {
      cout<<"Addition is : "<<(FirstVal+SecondVal)<<endl;
   }
   void Substraction()
   {
      cout<<"Substraction is : "<<(FirstVal-SecondVal)<<endl;
   }
   void Multiplication()
   {
      cout<<"Multiplication is : "<<(FirstVal*SecondVal)<<endl;
   }
   void Division()
   {
      cout<<"Division is : "<<(FirstVal*1.0/SecondVal)<<endl;
   }
   void Modulus()
   {
      cout<<"Modulus is : "<<(FirstVal%SecondVal)<<endl;
   }
};
void main()
{
   clrscr();
   ArithOper AO;
   int x,y;
   cout<<"Enter First Value : ";
   cin>>x;
   cout<<"Enter Second Value : ";
   cin>>y;
   AO.InputData(x,y);
   AO.Addition();
   AO.Substraction();
   AO.Multiplication();
   AO.Division();
   AO.Modulus();
   getch();
}



