#include<iostream>
using namespace std;
class base
{
	private:
		 int x=10;
		int y=20;
	public:
		void display() const
		{
			cout<<"value of x is"<<x;
		}
};
int main()
{
	base b;
	b.display();
}
