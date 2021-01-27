#include<iostream>
using namespace std;
void print()
{
	cout<<"i execute at last"<<endl;
}
template<typename T,typename ...Types>
void print(T var1,Types... var2)
{
	cout<<var1<<endl;
	print(var2...);
}
int main()
{
	print(1,2,3,4,"hello""hi");
}
