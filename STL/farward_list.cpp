#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> a={1,2,3,4,5,6,7,8};
	a.push_front(11);
	
	for(int x:a)
	{
		cout<<x<<endl;
	}
	forward_list<int>::iterator b;
	cout<<"using iterator"<<endl;
	for(b=a.begin();b!=a.end();b++)
	{
		cout<<*b<<endl;
	}
}
