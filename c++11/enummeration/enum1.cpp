#include<iostream>
using namespace std;
enum gender{male,female};
int main()
{
	gender a=male;
	switch(a)
	{
		case 0:
			cout<<"male"<<endl;
			break;
		case 1:
			cout<<"female"<<endl;
			break;
	}
}


