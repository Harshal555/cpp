#include<iostream>
#include<array>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	array<int,5> a1{11,23,4,5,56};
	array<char,5>a2{'a','b','c','d','e'};
	for(auto b:a1)
		cout<<b<<endl;
	for(auto c:a2)
		cout<<c<<endl;
	sort(a1.begin(),a1.end());
	for(auto c:a1)
		cout<<c<<endl;


}
