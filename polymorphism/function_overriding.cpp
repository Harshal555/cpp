#include<iostream>
using namespace std;
class parent
{
	public:
		parent()
		{
			cout<<"this is parent constructor"<<endl;
		}
		void display()
		{
			cout<<"this is parent"<<endl;
		}
};
class child:public parent
{
	public:
		void display()
		{
			cout<<"this is child";
		}
};

int main()
{
	child a;
	a.parent::display();
}

