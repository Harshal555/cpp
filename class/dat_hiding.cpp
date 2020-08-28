#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
	public:
		int area()
		{
			return length*breadth;
		}

		int setlength(int l)//mutators
		{
			if(l>0)
				length=l;
			else
				length=0;
		}
		int setbreadth(int b)//mutators
		{
			if(b>0)
				breadth=b;
			else
                                breadth=0;
		}
		int getlength()//accessors
		{
			return length;

		}
		int getbreadth()//accesssors
		{
			return breadth;
		}


};
int main()
{
	rectangle r1;
	int l,b;
	cout<<"enter l and b";
	cin>>l>>b;
	r1.setlength(l);
	r1.setbreadth(b);
	cout<<"length is" <<r1.getlength()<<endl;
	cout<<"breadth is "<<r1.getbreadth()<<endl;

	cout<<"area is"<<r1.area();
}

