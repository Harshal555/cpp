#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofile("file2.txt");
	ofile<<"harshal"<<endl;	
	ofile<<"pict"<<endl;
	ofile<<2880<<endl;
	ofile.close();

	ifstream ifs("file2.txt");
	string name;
	string college;
	int roll;
	ifs>>name;
	ifs>>college;
	ifs>>roll;
	if(ifs)
	{
		cout<<"file is open"<<endl;
	}
	ifs.close();
       cout<<"name "<<name<<endl;
	cout<<"college "<<college<<endl;
	cout<<"roll "<<roll<<endl;
}
