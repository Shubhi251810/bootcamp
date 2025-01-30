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
	int b[100];
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		b[i+1]=fib(i);
	}
	printf("%d",b[n]);
	return 0;
}
