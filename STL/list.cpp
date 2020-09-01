#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> a={1,2,3,4,5,6,7,8};
	a.push_back(9);
	a.push_back(10);
	list<int>::iterator b;
	for(b=a.begin();b!=a.end();b++)
	{
		cout<<*b<<endl;
	}
}
