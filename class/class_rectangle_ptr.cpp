#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breadth;
	
	int area()
	{
		return length*breadth;
	}
};

int main()
{
	rectangle r1,r2;
	rectangle *p;
	p=&r1;
	r1.length=10;
        r1.breadth=10;
	cout<<"area is "<<r1.area()<<endl;
	cout<<"area is using ptr is"<<p->area();
}