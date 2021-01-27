#include<iostream>
using namespace std;
class base //cannot inherit it further
{
	public:
	virtual	void fun() final//fun cannot be override as it is declared as final
		{
			cout<<"this is base class fun"<<endl;
		}
};
class derived:public base
{
	public:
	/*	void fun() 
		{
			cout<<"this is derived fun"<<endl;
		}*/
};
int main()
{
	
	derived d;
	base *ptr=&d;
	ptr->fun();

}
