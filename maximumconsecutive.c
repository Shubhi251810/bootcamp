//WAP to find the maximum consecutive 1's in a binary array.
#include<stdio.h>
int maxconsecutive(int arr[],int n)
{
  int count=1,max=0,i;
  for(i=0;i<n;i++)
  {
  	if(arr[i-1]==arr[i])
  	{
  		count++;
	  }
	  else if(max<count)
	  {
	  	max=count;
	  	count=1;
	  }
	}
	return max;
}
int main()
{
	int n,i;
	int arr[n];
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",maxconsecutive(arr,n));
	
	return 0;
}
