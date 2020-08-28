#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	
	public:
		
		rectangle(int x=0,int y=0)
		{
			length=x;
			breadth=y;
		}

		void setlength(int l)
		{
			length=l;
		}
		void setbreadth(int b)
		{
			breadth=b;
		}
		int getlength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}

		
};
class cub:public rectangle
{
	private:
	int	height;
	public:
		cub(int l,int b,int h)
		{
		setlength(l);
		setbreadth(b);
			height=h;
		}
		int cube_area()
		{
			return getlength()*getbreadth()*height;
		}
};
int main()
{
	cub r1(10,20,30);
	cout<<r1.cube_area();

	
}

