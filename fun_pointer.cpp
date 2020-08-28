#include<iostream>
using namespace std;
void dispaly();
void display()
{
	cout<<"hello";
}
int main()
{
void (*fp)();
fp=display;
display();
(*fp)();
}

