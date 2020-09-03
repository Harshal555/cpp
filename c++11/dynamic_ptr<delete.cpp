#include<iostream>
using namespace std;	
void fun(int m,int n);
class rectangle
{
	private:
		int length;
		int breadth;
		rectangle(int l=0,int b=0)
		{
			length=l;
			breadth=b;
			cout<<"object is created"<<endl;
		}
		int area()
		{
			cout<<"area is "<<length*breadth<<endl;
		}

	friend void fun(int m,int n);
		
};
int main()
{
	//rectangle obj(10,20);
//	obj.area();
	while(1)
	{
		int a,b;
		cout<<"enter the value of a ,b"<<endl;
		cin>>a>>b;
		fun(a,b);
	}
}

void fun(int m,int n)
{
rectangle *p=new rectangle(m,n);
p->area();
delete p;
cout<<"adress of ptr is "<<p<<endl;
}


