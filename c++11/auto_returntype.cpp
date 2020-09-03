#include<iostream>
using namespace std;
float add(float m,float n);
int main()
{
	float a=10.2;
	float b=20.1;
	
	auto c=add(a,b);
	cout<<c<<endl;
}
float add(float m,float n)
{
	return m+n;
}
