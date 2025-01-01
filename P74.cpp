#include<iostream>
#include<fstream>
using namespace std;
int main(int ac,char *av[])
{
	if(ac<=1)
	{
		cout<<"Please!!! Pass the Name of File...";
		return 0;
	}
	ifstream ifs;
	ifs.open(av[1]);
	char c;
	while(!ifs.eof())
	{
		c=ifs.get();
		cout<<" "<<c;
	}
	ifs.close();
	return 0;
}