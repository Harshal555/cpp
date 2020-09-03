#include<iostream>
using namespace std;
//T mymax(T m, T n);
template<typename T>
T mymax(T m, T n)
{
	return (m>n)?m:n;
}


int main()
{
	cout<<mymax <int> (10,21)<<endl;
	
	cout<<mymax <char> ('a','A')<<endl;
}
