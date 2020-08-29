#include<iostream>
using namespace std;
class classA
{
	public:
		int a;
};

class classB:public classA
{
	public:
		int b;
};
class classC:public classA
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
	obj.classC::a=10;
	cout<<obj.classC::a;
}
