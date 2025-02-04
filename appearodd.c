#include<stdio.h>
void appearodd(int arr[],int n)
{
	int x=arr[0];
	int i;
	for(i=1;i<n;i++)
	{
		x=x^arr[i];
    }
    int k;
    k=(x&(~(x-1)));
    int res1=0,res2=0;
    for(i=0;i<n;i++)
    {
    	if((arr[i]&k)!=0)
    	res1=res1^arr[i];
    	else
    	res2=res2^arr[i];
	}
	printf("%d %d",res1,res2);
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
	appearodd(arr,n);
	return 0;
}
