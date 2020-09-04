#include<iostream>
using namespace std;
class test
{
	protected:
	int x;
	public:
	void setvalue(int v)
	{
		x=v;
	}
virtual void show()=0;
/*	{
		cout<<"value is x is "<<x<<endl;
	}*/
};
class derived:public test
{
	void show()
	{
		cout<<"value of x in derived "<<++x<<endl;
	}
};
int main()
{
	/*base type ptr and base class obj this will not work for abstract class
	test *a=new test();
	a->setvalue(10);
	a->show();*/

//base type ptr and derived obj
	test *b=new derived();
	b->setvalue(10);
	b->show();


}
