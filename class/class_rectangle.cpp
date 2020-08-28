#include<iostream>
using namespace std;


class rectangle
{
	public:
	int length;
	int breadth;

	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle r1,r2;
	//cout<<"size of r1"<<sizeof r1<<endl;
	cout<<"enter the length and breadth of r1";
	cin>>r1.length>>r1.breadth;
	cout<<"r1 area is "<<r1.area()<<endl;
	cout<<"r1 perimeter is "<<r1.perimeter()<<endl;
	
	cout<<"enter the length and breadth of r2";
	cin>>r2.length>>r2.breadth;
	cout<<"r2 area is "<<r2.area()<<endl;
        cout<<"r2 perimeter is"<<r2.perimeter()<<endl;

}
