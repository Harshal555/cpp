#include<iostream>
using namespace std;
void fun (void);
int main()
{
	fun();
	fun();
	fun();
}
void fun()
{
      static int a=10;
	cout<<++a<<endl;
}
