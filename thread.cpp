#include<iostream>
#include<thread>
using namespace std;
auto f=[](int d){while(d<10){cout<<d++<<endl;}};
int main()
{
	thread a(f,3);
	a.join();
}
