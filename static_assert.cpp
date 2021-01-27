#include<iostream>
using namespace std;
static_assert(sizeof(int)==4,"size of int should be 5");
template<typename,int size>
class vector
{
	public:
		vector()
		{
			cout<<"object is created"<<endl;
		}
		static_assert(size>10,"size is less than 10");
};
int main()
{
vector<int,8> a;
}
