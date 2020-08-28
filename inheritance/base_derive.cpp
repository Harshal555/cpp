#include<iostream>
using namespace std;

class base
{
	public:
		int x=10;
		int y=20;

		void display()
		{
			cout<<"x is "<<x<<"y is"<<y<<endl;
		}
};
class derived:public base
{
	public:
		int a=30;
		int b=40;

		void show()
		{
			cout<<"a is "<<a<<"b is "<<b<<endl;
			cout<<"x is "<<x<<"y is"<<y<<endl;
		}
};

int main()
{
	base b;
	derived d;
	d.x=100;
	d.y=200;
	d.display();
	d.show();
}

