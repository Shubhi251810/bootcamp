#include<stdio.h>
int findodd(int arr[],int n)
{
	int res=arr[0];
	int i;
	for(i=1;i<n;i++)
	{
		res=res^arr[i];
    }
	return res;
}
int main()
{
	int n,i;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",findodd(arr,n));
	return 0;
}
