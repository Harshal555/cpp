#include<iostream>
using namespace std;
int main()
{
int a=10;
int &r=a;
cout<<r<<endl;
r=30;
cout<<a<<endl;
}
