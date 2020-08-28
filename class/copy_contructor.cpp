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
		cout<<"this is constructor"<<endl;
		setlength(l);
		setbreadth(b);
		display();


		}
		rectangle(rectangle &r)
		{
			cout<<"this is copy constructor"<<endl;
			length=r.length;
			breadth=r.breadth;
			cout<<"copy_contructor length"<<length;
			cout<<"copy_cont breadth"<<breadth;
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

};
int main()
{
	int a,b;
	cout<<"enter the length amd breadth";
	cin>>a>>b;
 	rectangle r1(a,b);
	rectangle r2(r1);
}
