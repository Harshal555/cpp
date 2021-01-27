#include<iostream>
#define a 10
#ifndef a
#error "a is not defined"
#endif
using namespace std;
int main()
{
	cout<<"hello"<<endl;
}
