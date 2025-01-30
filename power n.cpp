#include<stdio.h>
int poweroftwo(int n)
{
	if(n==0)
	return 1;
	return 2*poweroftwo(n-1);
}
int main()
{
	int n;
	printf("print a non negative integer (n);");
	scanf("%d",&n);
	printf("\n %d",poweroftwo(n));
	return 0;
}
