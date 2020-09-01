#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	ifstream a;
	a.open("file1.txt");
	string str;
	int x;
	a>>str;
	a>>x;
	cout<<"str "<<str<<" "<<"x "<<x<<endl;
}
