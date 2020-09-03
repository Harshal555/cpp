#include<iostream>
using namespace std;
class rectangle
{
	public:
	int length=10;
	int breadth=20;

	rectangle(int l,int b)
	{
		length=l;
		breadth=b;
	}
	rectangle():rectangle(2,2)
	{
		cout<<"length "<<length<<"breadth "<<breadth<<endl;
	}
};
int main()
{
	rectangle r();
	cout<<r.length;
}

