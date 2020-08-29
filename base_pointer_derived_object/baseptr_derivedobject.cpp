#include<iostream>
using namespace std;
class rectangle
{
	public:
		int l=10;
		int b=20;

		void area()
		{
			cout<<"area is"<<l*b<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter is"<<2*(l+b)<<endl;
		}
};
class cuboid:public rectangle
{
	public:
		int h=10;
		
		void volume()
		{
			cout<<"volume is"<<(l*b*h)<<endl;
		}
};
int main()
{
	rectangle *p;
	p= new cuboid();
	p->area();
	p->perimeter();
	
/*	cuboid *p;
	p= new cuboid();
	p->area();
	p->perimeter();
	p->volume();
*/	
}
			

