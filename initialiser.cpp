#include<iostream>
using namespace std;
class A
{
	public:
	const	int a,b;
		A(int x=0,int y=0):a(x),b(y)
		{
			//a=x;
			//b=y;
		}
};
int main()
{
	A a(10);
	cout<<a.b<<endl;
}
