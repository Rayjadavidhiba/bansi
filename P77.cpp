#include<iostream>
using namespace std;
void main()
{
	try
	{
		int x;
		char c;
		cout<<"Enter Number Value : ";
		cin>>x;
		cout<<"Enter Single Character Value of Your Name : ";
		cin>>c;
		if(x<0)
		throw x;
		cout<<"\n Number Input Passed Successfully...";
		if(c=='D' || c=='d')
		throw c;
		cout<<"\n All Input Verified Successfully...";
		}
		catch(int e)
		{
		cout<<endl<<e<<" is Negative Number Not Allowed for Process...";
		}
		catch(char e)
		{
		cout<<endl<<e<<" Character Named Move Out From the Class...";
		}
		catch(...)
		{
		cout<<"Default Exception Catched...";
		}
}