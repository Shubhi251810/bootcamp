//WAP to count the number.
#include<stdio.h>
int main()
{
	int n;
	int count=0;
	printf("Enter the numbers:");
	 scanf("%d",&n);
     while(n!=0)
     {
     	n=n/10;
     	count++;
	 }
	 printf("%d",count);
	 return 0;
}
