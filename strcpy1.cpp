#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[10]="hello";
	char b[10]="hifgdfgf";
	char *s;
	strcpy(b,a);
	cout<<b;
	cout<<endl<<strlen(a);

//	cout<<"enter the name";
//	getline(cin,s);
//	cout<<s<<" "<<"lenght is"<<strlen(s);

}

