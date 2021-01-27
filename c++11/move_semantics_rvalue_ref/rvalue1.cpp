#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
class A
{
	public:
		char* data;
	public:
		A(char* b)
		{
			size_t size=strlen(b)+1;
			data=new char[size];
			memcpy(data,b,size);
		        
		}
		A(const A &obj)//object is passed//this is copy constructor
		{
			size_t size1=strlen(obj.data)+1;
			data=new char[size1];
			memcpy(data,obj.data,size1);
			cout<<data[1];
		}
};
int main()
{
	char *x=new char[10];
	x="hello";
	A a(x);
	A b=a;
}
	
