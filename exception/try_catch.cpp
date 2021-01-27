#include<iostream>
int divv(int x,int y);
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of a,b";
	cin>>a>>b;
	int c;
	try
	{
		c=divv(a,b);
		cout<<"division is "<<c<<endl;

	}
	catch(int e)
	{
	cout<<"int divide by zero"<<endl;
	}

	catch(double e)
	{
		cout<<"double divide by zero"<<endl;
	}

	catch(char e)
	{
		cout<<"string divide by zero"<<endl;
	}

	catch(...)
	{
		cout<<"... divide by zero"<<endl;
	}
	cout<<"this always execute"<<endl;


}
int divv(int x,int y)
{
	if(y==0)
	{
		throw 1;
	}
	else
		return x/y;
}
