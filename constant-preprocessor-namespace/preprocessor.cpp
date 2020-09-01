#include<iostream>
using namespace std;
//#define sqr(x) x*x;
#define msg(y) #y;
#ifndef sqr
#define sqr(x) x*x*x
#endif
int main()
{
	cout<<sqr(10);
	cout<<msg("hello");

	cout<<sqr(10);

}
