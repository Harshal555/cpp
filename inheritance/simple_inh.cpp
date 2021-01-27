#include<iostream>
using namespace std;
class A
{	protected:
	int a=10;
};
class B:public A
{

	int b=20;
	public:
	void getvalue()
	{
		cout<< a;
	}
};
int main()
{
	B a;
	a.getvalue();
}
