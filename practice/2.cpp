#include<iostream>
using namespace std;
void print();
class Date
{
	public:
	int date;
	int month;
	int year;
	
	void print()
	{
		cout<<date<<endl<<month<<endl<<year<<endl;
	}
};

int main()
{
	Date a{15,12,2020};
	//ia.date=13;
	//cout<<a.year<<endl;
	a.print();
}
