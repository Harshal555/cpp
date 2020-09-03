#include<iostream>
#include<thread>
using namespace std;
void add(int *ptr);
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	thread b(add,a);
	b.join();//wait till execution of thread
	cout<<"hello"<<endl;
	cout<<"hello"<<endl;
	cout<<"hello"<<endl;
	cout<<"hello"<<endl;
	cout<<"hello"<<endl;
//	b.join();
}
void add(int *ptr)
{
	int sum=0;
	for(int i=0;i<10;i++)
	{
	//	cout<<ptr[i]<<endl;
		sum+=ptr[i];
	}
	cout<<"addition is "<<sum;

}
