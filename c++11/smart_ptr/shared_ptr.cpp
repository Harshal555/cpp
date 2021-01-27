#include<iostream>
#include<memory>

void fun(int a,int b);
using namespace std;
class rectangle
{
	int length;
	int breadth;

	rectangle(int l=0,int b=0)
	{
		cout<<"this is constructor"<<endl;
		length=l;
		breadth=b;
	}
	void area()
	{
		cout<<"area is "<<length*breadth<<endl;
	}

	friend void fun(int a,int b);
};
int main()
{
	int a,b;
	while(1)
	{
		cout<<"enter the length and breadth of recta";
		cin>>a>>b;
		fun(a,b);
	}
}
void fun(int a,int b)
{
	shared_ptr<rectangle> p1 (new rectangle(a,b));
	p1->area();
	cout<<"length is "<<p1->length<<endl;
	cout<<"breadth is"<<p1->breadth<<endl;
	shared_ptr<rectangle> p2=p1;
//in shared_ptr multiple objects can point to same object		
	p2->area();
	cout<<"length is "<<p2->length<<endl;
	cout<<"breadth is"<<p2->breadth<<endl;
	cout<<"no. of pointer pointing to object"<<p2.use_count()<<endl;
}


