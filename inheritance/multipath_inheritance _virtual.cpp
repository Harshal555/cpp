#include<iostream>
using namespace std;
class classA
{
	public:
		int a;
};

class classB: virtual public classA
{
	public:
		int b;
};
class classC:virtual public classA
{
	public:
	       int c;
};
class classD:public classB,public classC
{
	public:
		int d;
};
int main()
{
	classD obj;
	obj.a=10;
	cout<<obj.a;
}
