#include<stdio.h>
int sum(int ,int);
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("addition of two number is %d",sum(a,b));
}
int sum(int m,int n)
{
	return m+n;
}
