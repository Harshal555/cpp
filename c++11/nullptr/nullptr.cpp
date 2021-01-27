#include <iostream>
using namespace std;
 
void print(int x)
{
	cout << "print(int): " << x << '\n';
}
 
void print(int *x)
{
	if (!x)
		cout << "print(int*): null\n";
	else
		cout << "print(int*): " << *x << '\n';
}
 
int main()
{
	int *x { nullptr };
	print(x); // calls print(int*)
 
	print(nullptr); // calls print(int*) as desired
 
	return 0;
}


