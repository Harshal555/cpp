#include<iostream>
using namespace std;

class complex
{
	private:
		int real;
		int img;

	public:
		complex(int x=0,int y=0)
		{
			real=x;
			img=y;
		}
		
	friend ostream &  operator<<(ostream &out,complex &a);

};
ostream &  operator<<(ostream &out,complex &a)
{
	out<<a.real<<"+"<<a.img;
	return out;
}
int main()
{
	complex c(10,12);
	cout<<c;
	operator<<(cout,c);
      
}
