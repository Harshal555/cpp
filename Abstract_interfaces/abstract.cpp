#include<iostream>
using namespace std;
class base
{
	protected:
	int x=10;
	public:
virtual	int show()=0;
};
class derived:public base
{
	public:
	int show()
	{
		return x;
	}
};
int main()
{
	base *a=new derived();
	cout<<a->show();
}
