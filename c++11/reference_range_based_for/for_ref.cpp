#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> obj={1,2,3,4,5,6,7,9};
	for(auto &x:obj)//ref &x
	{
		x=x+5;
		cout<<x<<' '<<endl;
	}
       for(auto y:obj)
       {
	       cout<<y<<' '<<endl;
       }
}
