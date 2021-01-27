#include<iostream>
using namespace std;
int division(int,int);
int main()
{
	int a,b,c,result;
	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	try{
	c=division(a,b);
	}
	catch(int a)
	{
		cout<<"divid by zero"<<endl;
	}
	cout<<"result is "<<c<<endl;
}
int division(int m,int n)
{
	
		if(n<0)
		{
		throw 2;
		}
		return m/n;
	

}
