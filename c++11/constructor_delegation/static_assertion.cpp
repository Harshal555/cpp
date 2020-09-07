#include<iostream>
using namespace std;
template<class T,int size>
class A
{
	public:
		static_assert(size<5,"size i too small");//condition should true
	private:
		T a[size];
	public:
		void show()
		{
			cout<<size<<endl;
			cout<<typeid(a).name();
		}
};
int main()
{
	A<int,2> b;
	b.show();
}



