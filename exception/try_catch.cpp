#include<iostream>
int divv(int x,int y);
using namespace std;
class myexception1: exception
{
};
class myexception2:public myexception1
{

};

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
		cout<<"int divide by zero";
	}

	catch(double e)
	{
		cout<<"double divide by zero";
	}

	catch(char e)
	{
		cout<<"string divide by zero"<<e;
	}

/*	catch(myexception2 e)
	{
		cout<<"myexception2 divide by zero"<<e;
	}
	catch(myexception1() e)
	{
		cout<<"myexception1 divide by zero"<<e;
	}
*/
	catch(...)
	{
		cout<<"... divide by zero";
	}


}
int divv(int x,int y)
{
	if(y==0)
	{
		throw myexception2();
	}
	else
		return x/y;
}
