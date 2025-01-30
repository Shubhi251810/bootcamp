// reverse loop.
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	j=n;
	for(i=1;i<=n;i++)
	{
		printf("%d ",j);
		j--;
	}
	return 0;
}
