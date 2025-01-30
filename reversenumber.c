//WAP to count the number and sum.
#include<stdio.h>
int main()
{
	int n;
	int rem=0,res=0;
	printf("Enter the numbers:");
	 scanf("%d",&n);
     while(n!=0)
     {
     rem=n%10;
	 res=res*10+rem;
	 n=n/10;	
    
	 }
	 printf("%d",res);
	 return 0;
}
