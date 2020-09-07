#include<iostream>
#include<initializer_list>
using namespace std;
template<typename T>
class test
{
	public:
		test(initializer_list<T> text)
		{
			for(auto value:text)
				cout<<value<<endl;
		}

};
int main()
{
//	test<string> obj({"applie","banana","mango"});

	test<int> obj({1,2,3,4,5,6,7});
}
