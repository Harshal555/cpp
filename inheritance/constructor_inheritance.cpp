#include<iostream>
using namespace std;

class base
{       public:
	int x;
	int y;

	base()
	{
		cout<<"base non parameterized constructor"<<endl;
	}
	base(int l)
	{
		cout<<"base parameterized constructor"<<endl;
	}
};
class derived:public base
{
	public:
	derived()
	{
		cout<<"derived non parameterized constructor"<<endl;
	}
	derived(int m)
	{
		cout<<"derived parameterized constructor"<<endl;
	}
};
int main()
{
	derived a(10);
}

