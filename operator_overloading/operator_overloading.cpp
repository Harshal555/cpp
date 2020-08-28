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
			display();
		}
	        
		complex operator+(complex v)
		{
			complex temp;
			temp.real=real+v.real;
			temp.img=img+v.img;
			return temp;
		}
		void display()
		{
			cout<<"real is"<<real<<"\n"<<"img is"<<img<<endl;
		}


};
int main()
{
	complex a(2,3);
	complex b(5,7);
	complex c;
	//c=a.add(b);
	c=a+b;
	
//	complex c;
       c.display();
}
