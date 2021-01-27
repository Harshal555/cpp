#include<iostream>
using namespace std;
class A
{
	public:
		int *ptr;
	public:
		A(int l)
		{
			 ptr=new int;
			*ptr=l;
			cout<<*ptr<<endl;
		}
		A(const A &b)
		{
			ptr=new int;
			*ptr=*b.ptr;
			cout<<"this is copy constr "<<*ptr<<endl;
		}
		~A()
		{
			cout<<"destructor is called"<<endl;
		}
};
int main()
{
	A obj(5);
	A obj1=obj;//copy constructor is called here
	
}


