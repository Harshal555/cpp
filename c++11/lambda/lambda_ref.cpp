#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1={1,2,3,4,5,6,7};
	auto f=[&](int m){v1.push_back(m);};
	f(20);
	for(auto x:v1)
		cout<<x<<endl;
}
