//sum of digites using recursion.
#include<stdio.h>
int sum(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else 
	return n+sum(n-1);
}
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
