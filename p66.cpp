// setiosflags example
#include<iostream.h>     
#include<iomanip.h>      
int main () 
{
  cout << hex;
  cout << setiosflags (ios::showbase | ios::uppercase);
  cout << 100 << endl;
  return 0;
}