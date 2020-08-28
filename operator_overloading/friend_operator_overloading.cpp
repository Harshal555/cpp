#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		int img;
        complex(int x=0,int y=0)
	{
		real=x;
		img=y;
	}

	friend complex operator+(complex v,complex y);

};
complex operator+(complex v,complex y)
{
	complex t;
	t.real=v.real+y.real;
	t.img=v.img+y.img;
	return t;
}

int main()
{
	complex a(2,5);
	complex b(4,3);
	complex c;
	c=a+b;
	cout<<"real of c "<<c.real<<"imag of c"<<c.img;
}
        
         
