//WAP to sum the n natural numbers.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
     printf("Enter natural numbers:");
	 scanf("%d",&n);
	 for(i=0;i<=n;i++)
	 {
	 	sum=sum+i;
	 }
	 printf("%d",sum);
	 return 0;
}
