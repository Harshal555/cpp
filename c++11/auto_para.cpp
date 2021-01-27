#include<iostream>
using namespace std;
void add(auto x,auto y)
{
	cout<<x+y<<endl;
}
int main()
{
	add(5,10);
	add(5.1,10.1);
}
