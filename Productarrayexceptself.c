//product of array except self.
#include<stdio.h>
int Productarray(int arr[], int n)
{
 
 int res[100];
  for (int i = 0; i < n; i++)
  {
   int prod=1;
   for(int j=0;j<n;j++)
   {
  if(arr[i]!=arr[j])
  {
    prod *= arr[j];
    res[i]=prod;
  }
  else
  continue;
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
    Productarray(arr,n);
   return 0;
}
