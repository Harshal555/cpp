#include<iostream>
using namespace std;
class A
{
	
const	int a;
const	int b;
	public:
	A(int x,int y):a(x), b(y)//initializer list must be used
	{
	}

	void show()
	{
		cout<<"a is "<<a<<"b is"<<b<<endl;
	}
};
A fun(int m,int n)
{
	cout<<"fun is called"<<endl;
	return {m ,n};
}
int main()
{
	A x=fun(10,55);
	x.show();
}

