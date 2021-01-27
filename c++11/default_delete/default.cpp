#include<iostream>
using namespace std;
class A
{
	public:
		A(int a,int b)
		{
			cout<<"this is parameterise constructor"<<endl;
		}
	/*	A(int c=0)
		{
			cout<<"this is single parameterise const"<<endl;
		}*/
		A()=default;
};
int main()
{
	A a;//default constructor will call
	A b(1,0);
}
