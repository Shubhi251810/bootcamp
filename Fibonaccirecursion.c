//fibonacci series using recursion.
#include<stdio.h>
//#include<iostream.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else 
	return (fib(n-1)+fib(n-2));
}
int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",fib(n));
	}
	return 0;
}
