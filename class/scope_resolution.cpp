#include<iostream>
using namespace std;
class rectangle
{
	private:	
		int length;
		int breadth;
	
        public:
		rectangle(int l,int b)
		{
		//	int l=l;
		//	int b=b;
		cout<<"this is constructor"<<endl;
		setlength(l);
		setbreadth(b);
		display();

		}
		void setlength(int l)
		{
			cout<<"setting length"<<endl;
			if(l<0)
			{
				length=1;
			}
			else
				length=l;
		}
		void setbreadth(int b)
		{
			cout<<"setting breadth"<<endl;
			if(b<0)
				breadth=1;
			else
				breadth=b;
		}
                void display()
		{
			cout<<"display"<<endl;
			cout<<"length is"<<length<<endl;
			cout<<"breadth is"<<breadth<<endl;
		}
		int area();

};

		int rectangle::area()
		{
			return length*breadth;
		}
int main()
{
	int a,b;
	cout<<"enter the length amd breadth";
	cin>>a>>b;
 	rectangle r1(a,b);
	cout<<"area of recta is"<<r1.area();
}
