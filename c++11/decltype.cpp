#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int a;
	cout<<typeid(a).name()<<endl;
	decltype(a) b=20;
	cout<<b<<endl;
	cout<<typeid(b).name()<<endl;
}
