#include<iostream>
using namespace std;
void fun(void);
class base
{
	private:
		int *p;
	public:
		base(int a)
		{
			p=new int[a];
			cout<<"constructor is called"<<endl;
		}
		
		~base()
		{
			cout<<"destructor is called"<<endl;
			delete []p;//heap memory is deleted
		}
};
void fun(void)
{
	base a(20);
}

int main()
{
	fun();
}
