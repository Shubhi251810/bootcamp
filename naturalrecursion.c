//sum of n natural numbers using recursion.
#include<stdio.h>
int nat(int n)
{
	if(n==0)
	return 0;
	else 
	return n+nat(n-1);
}
int main()
{
	int n,i,a;
	printf("enter a number:");
	scanf("%d",&n);
	a=nat(n);
	printf("%d",a);
	return 0;
}
