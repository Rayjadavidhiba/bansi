#include <stdio.h>
#include<iostream.h>
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age >= 0 && age <= 12) 
        cout<<"You are a child.\n";
    else if (age >= 13 && age <= 19) 
              cout<<"You are a teenager.\n";
           else if (age >= 20 && age <= 35) 
                     cout<<"You are young.\n";
                  else if (age >= 36 && age <= 50) 
                            cout<<"You are younger.\n";
                         else 
                               cout<<"You are older.\n";
    return 0;
}