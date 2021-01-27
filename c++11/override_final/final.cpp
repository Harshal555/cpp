#include<iostream>
using namespace std;
class base final//cannot inherit it further
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
		void fun() 
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
