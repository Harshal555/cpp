#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
	A (int x,int m) :a(x),b(m){}

	void show()
	{
		cout<<" a is "<<a<<"b is"<<b<<endl;
	}
};

void fun(A z)
{
	z.show();
}
int main()
{
	fun({12,15});
}
