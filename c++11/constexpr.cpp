#include<iostream>
using namespace std;
constexpr int add(int x,int y)
{
	return x+y;
}
int main()
{
	const int b=add(10,20);
	cout<<b<<endl;
}
