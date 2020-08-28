#include<iostream>
#include<string>
using namespace std;
int main()
{
       string a;
	cout<<"enter the full name"<<endl;
       getline(cin,a);
       cout<<"size of this is "<<a.length()<<endl;
       cout<<"size of this is "<<a.size()<<endl;
       cout<<"capacity of this is "<<a.capacity()<<endl;
       cout<<"max_size of this is "<<a.max_size()<<endl;
       //////////////////cout<<"clear of this is "<<a.clear()<<endl;
       cout<<"empty of this is "<<a.empty()<<endl;
	a.append("from jawal");
	cout<<a;
return 0;
}
