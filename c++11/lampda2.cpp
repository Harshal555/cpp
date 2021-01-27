#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int y=20;
	[x,y](int x,int y){cout<<"multiplication is "<<x*y<<endl;}(x,y);

	//[&x,&y](int x,int y){cout<<"additiontion is "<<++x+(++y)<<endl;}();
	//[&](int x,int y){cout<<"additiontion is "<<++x+(++y)<<endl;}();
        float a=[](int x,int y)->float{ return x+y;}(20,30);
	cout<<"return is "<<a<<endl;


	auto f=[&x](){cout<<" x "<<x<<endl;};
	f();
	x++;
	f();
         
}
