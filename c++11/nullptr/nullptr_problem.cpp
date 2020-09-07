#include<iostream>
using namespace std;
void fun(int* a);
void fun(char *b);
class A
{
	public:
	void	fun(int* a)
		{
			cout<<"this is integer ptr";
		}
	void	fun(char* b)
		{
			cout<<"this is char ptr";
		}
};
int main()
{
	decltype(nullptr) *x;
//	fun(x);
	fun(*x);
}
