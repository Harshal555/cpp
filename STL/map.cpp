#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m.insert(pair<int,string>(1,"harshal"));
	m.insert(pair<int,string>(2,"shivam"));
	map<int,string>::iterator i;
	for(i=m.begin();i!=m.end();i++)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
}
