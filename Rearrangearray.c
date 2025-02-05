#include<stdio.h>
int Rearrangearray(int arr[], int n)
{
  int pos[n/2],neg[n/2];
  int res[100],j=0,k=0;
  for (int i = 0; i < n; i++)
  {
  
  if(arr[i]>0)
  {
    pos[j++]=arr[i];
  }
  else
  {
    neg[k++]=arr[i];
  }
  }
  j=0;
  k=0;
  for(int i=0;i<n;i++)
  {
   res[2*i+1]=neg[j++];
   res[2*i]=pos[k++];
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
