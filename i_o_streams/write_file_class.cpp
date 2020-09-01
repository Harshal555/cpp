/*opearater overloading*/
#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
		string name;
		int roll;
		string college;
	friend ofstream & operator<<(ofstream &a,student &b);


};

 ofstream & operator<<(ofstream &a,student &b)
{
	a<<b.name<<endl;
	a<<b.roll<<endl;
	a<<b.college<<endl;
	return a;
}
int main()
{
	ofstream ofs("class_file_operater.txt",ios::trunc);
	student s1;
	s1.name="harshal gajjalwar";
	s1.roll=142885;
	s1.college="pict pune";
	ofs<<s1;
}
