
#include<stdio.h>
int Peakelearray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
        {
            printf("peak element %d \n",arr[i]);
        }
    }
}
int main()
{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Peakelearray(arr,n);
   return 0;
}
