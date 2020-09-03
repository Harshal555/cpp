#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	auto f=[&a,&b](int a,int b){return a+b;}(10,5);
	cout<<f;
	cout<<f;
}
