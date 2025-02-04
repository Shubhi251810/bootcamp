#include<stdio.h>
#include<stdbool.h>
bool power2(int n)
{
	if(n==0)
	{
		return 0;
	}
	return((n&(n-1))==0);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",power2(n));
	return 0;
}
