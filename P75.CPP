#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main(int ac,char *av[])
{
	clrscr();
	if(ac<=1)
	{
		cout<<"Please!!! Pass the Name of File...";
		return 0;
	}
	ifstream ifs;
	ifs.open(av[1]);
	ofstream ofs(av[2]);
	char c;
	while(!ifs.eof())
	{
		c=ifs.get();
		ofs.put(c);
	}
	cout<<av[1];
	cout<<endl<<"\t 1 File Copied...";
	ifs.close();
	ofs.close();
	return 0;
}
 