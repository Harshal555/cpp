#include<iostream>
using namespace std;
int add(int ,int );
int add(int ,int ,int );
int main()
{
int a,b,c,s1,s2;
cout<<"enter two numbers";
cin>>a>>b>>c;
s1=add(a,b);
cout<<"sum of first two number is"<<s1<<endl;
s2=add(a,b,c);
cout<<"sum of three number is "<<s2<<endl;
}

int add(int a,int b)
{
return a+b;
}

int add(int a,int b,int c)
{
	return a+b+c;
}


