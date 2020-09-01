#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a={1,2,3,4,5,6,7,8};
	a.push_back(9);
	a.pop_back();//remove the value
	for(int x:a)
	{
		cout<<x<<endl;
	}
	cout<<"using iterator"<<endl;
	vector<int>::iterator itr;
	for(itr=a.begin();itr!=a.end();itr++)
	{
		cout<<*itr<<endl;
	}
}
