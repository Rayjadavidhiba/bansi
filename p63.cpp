// modify unifbuf flag
#include<ios.h>        
#include<fstream.h>    
int main () 
{
  ofstream outfile ("test.txt");
  outfile << unitbuf <<  "Test " << "file" << '\n';   outfile.close();
  return 0;
}