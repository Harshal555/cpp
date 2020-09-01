#include<iostream>
using namespace std;

class base
{
	public:
		base()
		{
			cout<<"this is base constructor"<<endl;
		}
		~base()
		{
			cout<<"this is base destructor"<<endl;
		}
};
class child:public base
{
	public:
		child()
		{
			cout<<"this is child constructor"<<endl;
		}
		~child()
		{
			cout<<"this is child destructor"<<endl;
		}
};
int main()
{
	child c;
}
