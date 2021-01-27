#include<iostream>
using namespace std;
template<typename T,int size>
void fun()
{
	static_assert(size>10,"size is negative");
	T a[size];
}
int main()
{
	fun<int,3>();
}
