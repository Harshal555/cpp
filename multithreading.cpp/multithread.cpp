#include<iostream>
#include<pthread.h>
#include<cstdlib>
using namespace std;
int main()
{
	pthread_t a;
	int c=pthread_create(&a,NULL,number,NULL);
	if(c)
	{
		cout<<"unable to create thread";
		exit(-1);
	}

	pthread_exit(NULL);
}

void *number()
{
	for (int i=0;i<10;i++)
	{
		cout<<i<<endl;
	}
	pthread_exit(NULL);
}
