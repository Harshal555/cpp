#include<iostream>
using namespace std;
class A
{
	public:
		void hello()
		{
			cout<<"hello from class A"<<endl;
		}
};
class B:public A
{
};
class C:public B
{
};
int main()
{
	C obj;
	obj.hello();
}
