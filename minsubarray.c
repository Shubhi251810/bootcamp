//minimum subarray.
#include<stdio.h>
#include<limits.h>
int maxsubarraysum(int arr[],int n,int k)
{
	int maxsum=INT_MIN;
	int currsum=0;
	int i;
	for(i=0;i<=n-k;i++)
	{
		currsum=currsum+arr[i];
	if(currsum>maxsum)
		maxsum=currsum;
	if(currsum<0)
		currsum=0;
	}
	return maxsum;
}
int minsubarraysum(int arr[],int n,int k)
{
	int minsum=INT_MAX;
	int currsum=0;
	int i;
	for(i=0;i<=n-k;i++)
	{
		currsum=currsum+arr[i];
	if(currsum<minsum)
		minsum=currsum;
	if(currsum>0)
		currsum=0;
	}
	return minsum;
}

void input(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
 }
int main()
{
    int n,i,k=3;
	clrscr();
    printf("enter no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in ");
    input(arr,n);
        printf("maxsubarray=%d", maxsubarraysum(arr,n,k));
        printf("minsubarray=%d", minsubarraysum(arr,n,k));
    
 return 0;
}
