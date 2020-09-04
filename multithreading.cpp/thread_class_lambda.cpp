#include<iostream>
#include<thread>
using namespace std;
void fun(int x);
class rectangle
{
	public:
		int length;
		int breadth;
		void  operator()(rectangle l)
		{
		cout<<"area is "<<l.length*l.breadth;
		for(int i=0;i<20;i++)
			cout<<"from class"<<i<<endl;
		}
};

	void fun(int x)
	{
		for(x;x<100;x++)
			cout<<"from fun"<<x<<endl;
	}

int main()
{
	
auto f=	[](int j){for( j;j<50;j++){cout<<"from lambda"<<j<<endl;}};
	rectangle a;
	cout<<"enter the length and breadth"<<endl;
	cin>>a.length>>a.breadth;
	thread b(rectangle(),a);
	thread c(f,30);
	thread d(fun,60);
        for(int k=0;k<20;k++)
		cout<<"this is from main()"<<endl;

	c.join();
	d.join();
	b.join();
}
