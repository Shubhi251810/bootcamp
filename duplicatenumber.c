//write a program to remove all the duplicate element.
#include<stdio.h>
int removeduplicate(int arr[],int n)
{
	int temp[n];
	int j,i;
	if(n==0||n==1)
	return n;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			temp[j++]=arr[i];
		}
	}
	temp[j++]=arr[n-1];
	
	for(i=0;i<j;i++)
	{
		arr[i]=temp[i];
	}
	return j;
	
}
int main()
{
    
    int i,n,temp=0,j;
    int arr[n];
    //int size = sizeof(arr) / sizeof(arr[0]);
    //int first=0;
    printf("enter the number of element:");
   scanf("%d",&n);
    
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d ",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
			}
		}
	}
    n= removeduplicate(arr,n );
    printf("array after removing duplicate");
    for(i=0;i<n-1;i++)
    {
    	printf("%d \n",arr[i]);
	}
	return 0;
}
