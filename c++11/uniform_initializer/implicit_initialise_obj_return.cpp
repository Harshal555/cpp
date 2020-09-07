#include<iostream>
using namespace std;
class A
{
	
	int a;
	int b;
	public:
	A(int x,int y):a(x), b(y){}

	void show()
	{
		cout<<"a is "<<a<<"b is"<<b<<endl;
	}
};
A fun(int m,int n)
{
	return {m ,n};
}
int main()
{
	A x=fun(10,55);
	x.show();
}

