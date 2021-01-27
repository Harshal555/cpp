#include<iostream>
using namespace std;
class A
{
	public:
		int a,b,c,d;
	//	A()=default;
		A(int d)
		{
			 a=0;
			 b=0;
			 c=d;
			cout<<"class A object is created"<<endl;
		}
};
class B:public A
{
	public:
	B(int z):A( z)
	{
		cout<<"class B object is created"<<endl;
	}
};
int main()
{
	B g(10);
	cout<<g.c<<endl;
}
