#include<iostream>
using namespace std;
void main()
{
	try
	{
		double x,y;
		cout<<"Enter First Value : ";
		cin>>x;
		cout<<"Enter Second Value : ";
		cin>>y;
		if(y==0)
		throw runtime_error("Divide by Zero not Allowed...");
		double ans=x/y;
		cout<<"Division is="ans;
	}
	catch(const exception & e)
	{
		cout<<"\n Error Number is : "<<cerr<<"Error is : "<<e.what()<<"\n";
	}
}