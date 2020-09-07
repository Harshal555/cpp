#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	int avaerage;
	public:
	A():A(0)
	{
		cout<<"this is non parameterized constructor in A"<<endl;
	}
	A(int a):A(0,0)//uniform initialization
	{
		//this->a=a;
		//
		a=a;
		cout<<"single parameter A "<<a<<endl;
	}
	A(int i,int j):a(i),b(j)
	{
		
		cout<<"double parameterise A "<<a<<" "<<b<<endl;
	}
};
class B:public A
{
	public:
	B():A()//constructor delegation
	{
		cout<<"child this is non parameterised constr"<<endl;
	}
};
int main()
{
	B a;
}
