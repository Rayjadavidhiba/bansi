// modify showbase flag
#include<iostream.h>     
int main () 
{
  int n = 20;
  cout << hex << showbase << n << '\n';
  cout << hex << noshowbase << n << '\n';
  return 0;
}