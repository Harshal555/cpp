#include<iostream>
using namespace std;
int main()
{
	int *p=new int[10];
	cout<<p;
	for(int i=0;i<10;i++)
	{
		cout<<"enter the number for "<<i<<" ";
		cin>>p[i];
	}

      //  p[10]=100;
    //  delete []p;
     int *a=new int[20];
      a=p;
      cout<<"value is "<<a;
      for(int i=15;i<20;i++)
      {
	    cin>>a[i];
      }  
	for(int i=0;i<20;i++)
	{
		//cout<<"enter the number for "<<i<<" ";
		cout<<a[i]<<endl;
	}
	cout<<sizeof p;
	
}
