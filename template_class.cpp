#include<iostream>
using namespace std;
template<typename T>
class array
{
	private:
		int size;
		T *ptr;
	public:

		array(T b[],int s);

		void print();
};	
template<typename T>
array<T>::array(T b[] ,int s)
{
	size=s;
	ptr=new T[size];
	for(int i=0;i<size;i++)
	{
		ptr[i]=b[i];
	}

}
template<typename T>
void array<T>::print()
{
	for(int j=0;j<size;j++)
	{
		cout<<ptr[j]<<endl;
	}
}



int main()
{
	char a[]={'a','b','c','d','e'};
	array<char> obj(a,5);
	obj.print();	
}
