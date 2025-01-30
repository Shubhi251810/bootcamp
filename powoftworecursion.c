// power of 2.
#include<stdio.h>
//#include<math.h>
int powoftwo(int n)
{
	if(n==0)
	return 1;
//	else if(n==1)
//	return 1;
	else 
	return 2*powoftwo(n-1);
}
int main()
{
	int n,a;
	printf("enter the number:");
	scanf("%d",&n);
	a=powoftwo(n);
	printf("%d",a);
}
