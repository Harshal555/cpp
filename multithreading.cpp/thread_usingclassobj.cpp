#include<iostream>
#include<thread>
using namespace std;
class rectangle
{
	public:
	void operator ()(int i)
	{
		for( i;i<10;i++)
			cout<<"this is from class"<<endl;
	}
};
int main()
{
	thread a(rectangle(),2);
	a.join();
      
}

