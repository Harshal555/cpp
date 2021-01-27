#include<iostream>
using namespace std;

class recta
{
	public:
	int length;
	int breadth;
	
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	recta r;
	cout<<"enter the length and breadth";
	cin>>r.length>>r.breadth;
	cout<<r.area();
}

