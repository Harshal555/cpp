#include<iostream>
using namespace std;
namespace first
{
	int fun()
	{
		cout<<"this is fun1"<<endl;
	}
}
namespace second
{
	int fun()
	{
		cout<<"this is fun2"<<endl;
	}
}
using namespace second;
int main()
{
	fun();
	first::fun();
}
