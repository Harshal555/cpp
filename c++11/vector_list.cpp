#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a={1,2,3,4,5,6,7,8,9};
//	a.push_back(10);
//	a.push_back(11);
//	cout<<a.pop;
	for(auto x:a)
	{
		cout<<x<<endl;
	}
	string n = "hello";
	for(char c :n)
	{
		cout<<c<<' ';
	}
}
