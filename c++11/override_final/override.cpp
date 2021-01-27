#include<iostream>
using namespace std;
class base
{
	public:
	virtual void fun()
		{
			cout<<"this is base class fun"<<endl;
		}
};
class derived:public base
{
	public:
		void fun() override
		{
			cout<<"this is derived fun"<<endl;
		}
};
int main()
{
	
	derived d;
	base *ptr=&d;
	ptr->fun();

}
