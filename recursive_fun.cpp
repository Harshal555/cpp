#include<iostream>
using namespace std;
void recursion(int);
int main()
{
	int a=10;
	recursion(a);
}
void recursion(int n)
{
	if(n>0)
	{
		cout<<n<<endl;
		recursion(n-1);
	}
}


