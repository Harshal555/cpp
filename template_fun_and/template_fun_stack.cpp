#include<iostream>
using namespace std;
template<class T>
class stack
{
	private:
		int size;
		T *s;


		int top=-1;
	public:
		stack(int a)	
		{
		size=a;			
		s=new T[size];
		}
		void push( T x);
		T pop();
};

template<class T>
void stack<T>::push(T x)
{

	if(top<size-1)
	{
		//cout<<"stack is empty"<<endl;
		top++;
	
		s[top]=x;
	
	}
	else
	{
		cout<<"stack is full"<<endl;
	}
}

template<class T>
T stack<T>::pop()
{
	if(top==-1)
	{
		cout<<"stack is empty";
	}
	else
	{
	
		return s[top--];
	}
}
int main()
{
	stack<float> m(5);
	m.push(1.2);
	m.push(2);
	m.push(3);
	cout<<m.pop();
	cout<<m.pop();
	cout<<m.pop();
}

