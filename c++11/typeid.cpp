#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	string i;
	decltype(i) name="harshal";
	cout<<typeid(i).name();//print type of data
	cout<<name;
}
