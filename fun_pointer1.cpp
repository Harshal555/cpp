#include<iostream>
using namespace std;
int max(int x, int y);
int min(int x,int y);
int main()
{
	int a,b;
	cout<<"please int enter two numbers"<<endl;
        cin>>a>>b;
	int (*fp)(int,int);
	fp=max;
	int c=(*fp)(a,b);
	cout<<"max is "<<c<<endl;



}
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x<y?x:y;
}
