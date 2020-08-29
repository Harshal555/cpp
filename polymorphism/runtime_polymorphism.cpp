#include<iostream>
using namespace std;

class car
{
	public:
	virtual	void start()
		{
			cout<<"car is started"<<endl;
		}
};

class innova:public car
{
	public:
		void start()
		{
			cout<<"innova is started"<<endl;
		}
};
class swift:public car
{
	public:
		void start()
		{
			cout<<"swift is started"<<endl;
		}
};

int main()
{
	car *p=new innova();//dynamic object creation
	p->start();//runtime polymorphism
	p=new swift();
	p->start();//runtime polymorphism
}
