#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &y=a;//reference
	cout<<a<<endl;
	a++;
	y++;
	cout<<y;
	cout<<"adess of a"<<&a<<endl;
	cout<<"adress of b"<<&y<<endl;

}

