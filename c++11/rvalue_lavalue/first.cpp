/*lvalue and rvalue*/
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *ptr=&a;
	//holding adress of lvalue
	cout<<ptr <<" "<<&a<<endl;
	cout<<*ptr <<" "<<a<<endl;
	
	int *ptr1=&++a;	
	cout<<*ptr <<" "<<a<<endl;
	//you cannot hold adress of rvalue
	//int *ptr1=&10;
	//cout<<ptr1<<endl;
}
