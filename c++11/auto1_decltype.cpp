#include<iostream>
#include<typeinfo>
using namespace std;
template<typename T,typename A>
auto hello( T value1,A value2)->decltype(value1+value2)
{
	return value1+value2;
}

int main()
{
	cout<<hello(10,12)<<endl;
}
