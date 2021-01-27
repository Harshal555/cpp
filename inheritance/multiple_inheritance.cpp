#include<iostream>
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"this is class A"<<endl;
		}
};
class B
{
	public:
		void fun1()
		{
			cout<<"this is class B"<<endl;
		}
};
class C:public A,public B
{
};
int main()
{
	C a;
	a.fun();
	a.fun1();
}
