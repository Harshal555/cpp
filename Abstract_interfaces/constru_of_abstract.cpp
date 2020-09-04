#include<iostream>
using namespace std;
class base
{
	public:
		int x;
		base(int l)
		{
			cout<<"this is base "<<endl;
			x=l;
		}
	virtual	void show()=0;
};
class derived:public base
{
	public:
		int y;
		derived(int b,int c):base( b)
		{
			cout<<"this is derived"<<endl;
			y=c;
		}
		void show()
		{
			cout<<"value of x and y is "<<x<<" "<<y<<endl;
		}
};
int main()
{
	derived m(10,15);
	m.show();
}
