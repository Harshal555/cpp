#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<string> obj={"hello","dhbdn","jdbqdqjb"};
	//for( auto x:obj)//copy obj
	for(auto &x:obj)//not copies the obj only ref is taken
	{
		cout<<x<<endl;
	}
}
