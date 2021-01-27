#include<iostream>
using namespace std;	
#include<memory>
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
unique_ptr<rectangle> p1(new rectangle(m,n));
p1->area();
//using unique ptr ,only one ptr can point to object
unique_ptr<rectangle> p2 ;
p2=move(p1);
p2->area();

}


