#include<iostream>
using namespace std;
int main()
{
  	int  a=10;
	int b=20;
         int const *p=&a;
	cout<<*p<<endl;
	p=&b;
	cout<<*p<<endl;

	
}
