// factorial with function.
#include<stdio.h>
int fact(int);
int main()
{
	int n,a;
	printf("enter a number:");
	scanf("%d",n);
	a=fact(n);
	printf("%d",a);
   return 0;	
}
int fact(int n)
{
  int fact=1,i;
  for(i=1;i<=n;i++)
    {
  	fact=fact*i;
	}
	
}

