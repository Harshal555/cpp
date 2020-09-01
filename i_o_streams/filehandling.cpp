#include<fstream>
using namespace std;
int main()
{
	ofstream a("file1.txt",ios::trunc);
	a<<"hello"<<endl;
	a<<"25"<<endl;
	a.close();
}
