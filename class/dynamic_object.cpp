#include<iostream>
using namespace std;


class rectangle
{
	public:
		int length=10;
		int breadth=20;

	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle *p=new rectangle;
	cout<<p->length<<endl;
	cout<<p->area()<<endl;
	cout<<p->perimeter()<<endl;

}
