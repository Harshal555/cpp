#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A(int y)
	{
		x=y;
		cout<<"value of x is "<<x<<endl;
	}
	A(double)=delete;
};
int main()
{
	A a(10);
	A b(12.5);
}
