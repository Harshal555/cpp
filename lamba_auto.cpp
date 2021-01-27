#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=20;
	[&a,&b](){a++;cout<< a+b<<endl;}();
	//int f=[&a,&b](){a++;cout<< a+b<<endl;};
	
	//cout<<f;
	cout<<a;
}
