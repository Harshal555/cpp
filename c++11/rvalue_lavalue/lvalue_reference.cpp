#include<iostream>
using namespace std;
class A
{
	public:
		int a=10;
		int b=20;

		 A()
		{
			return a+b;
		}
};
int get()
{
	return A();
}
int main()
{
	A obj=get();
	cout<<obj<<endl;
}
