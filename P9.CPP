#include <stdio.h>
#include<iostream.h>
int main() {
    double num;
    cout<<"Enter a number: ";
    cin>>num;   
    if (num >= 0 && (int)num == num) 
    {
        cout<<"Natural Number is a :\n";
         cin>>num;
    } else if (num >= 0)
      {
        cout<<"Real Number is a :\n";
        cin>>num;
      } else 
       {
        cout<<"This Number is a not a real number or natural number\n";
        cin>>num;
        }    
    return 0;
}