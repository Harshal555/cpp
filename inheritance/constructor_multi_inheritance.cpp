#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle(int a=0, int b=0)
			{
				cout<<"this is vehicle constructor"<<endl;
			}
};
class truck:public vehicle
{
	public:
		truck(int m=0,int n=0)
		{
			cout<<"this is truck constructor"<<endl;
		}
};
class car:public truck
{
	public:
		car(int q=0,int r=0)
		{
			cout<<"this is car onstructor"<<endl;
		}
};
int main()
{
	truck c;

}
