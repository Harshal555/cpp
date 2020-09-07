#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	char a='h';
	cout<<typeid(a).name()<<endl;
	decltype(a) b='m';
	cout<<typeid(b).name()<<endl;
	auto name='b';
	cout<<typeid(name).name()<<endl;

}
