#include<stdio.h>
int Rearrangearray(int arr[], int n)
{
 
  int res[100],j=0,k=0;
  for (int i = 0; i < n; i++)
  {
  
  if(arr[i]>0)
  {
    res[j]=arr[i];
    j+=2;
    
  }
  else
  {
    res[k+1]=arr[i];
    k+=2;
  }
  }
 
  for( int i = 0; i < n; i++)
  {
    printf("%d  ",res[i]);
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
    Rearrangearray(arr,n);
   return 0;
}
