#include<stdio.h>
#include<limits.h>
int maxsubarraysum(int arr[],int n)
{
	int maxsum=INT_MIN;
	int currsum=0;
	int i;
	for(i=0;i<=n;i++)
	{
		currsum=currsum+arr[i];
	if(currsum>maxsum)
		maxsum=currsum;
	if(currsum<0)
		currsum=0;
	}
	return maxsum;
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
    int n,i;
    printf("enter no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in ");
    input(arr,n);
        printf("subarray=%d", maxsubarraysum(arr,n));
    
 return 0;
}
