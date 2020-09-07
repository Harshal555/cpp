#include<iostream>
#include<typeinfo>
using namespace std;
template<typename T>
auto hello( T value)->T
{
	return value;
}
int main()
{
	cout<<hello("hi threre")<<endl;
}
