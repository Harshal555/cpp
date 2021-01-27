#include<iostream>
using namespace std;
namespace A
{
	void fun()
	{
		cout<<"fun in namespace A"<<endl;
	}
}

namespace B
{
	void fun()
	{
		cout<<"fun in namespace B"<<endl;
	}
}
int main()
{
//	using namespace A;
	B::fun();
}
