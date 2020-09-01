#include<iostream>
using namespace std;
template<class I,class J>
J add(I x,J y);
int main()
{
	int a=10;
	float b=12.5;
        cout<<add(a,b);
}

template<class I,class J>
J add(I x,J y)
{
	return x+y;
}
