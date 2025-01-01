#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	clrscr();
	ofstream ofs("nidhi.txt");
	ifstream ifs;
	ifs.open("P72.cpp");
	char c;
	while(ifs)
	{
		c=ifs.get();
		ofs.put(c);
	}
	cout<<"File Copied...";
	ofs.close();
	ifs.close();
}