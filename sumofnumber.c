//WAP to count the number and sum.
#include<stdio.h>
int main()
{
	int n,t;
	int sum=0;
	printf("Enter the numbers:");
	 scanf("%d",&n);
     while(n!=0)
     {
     	t=n;
//     	t=t/10;
        t=t%10;
     	sum=sum+t;
        n=n/10;
	 }
	 printf("%d",sum);
	 return 0;
}
