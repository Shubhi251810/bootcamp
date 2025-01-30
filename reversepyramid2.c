#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=0;i<5;i++)
 {
 	for(j=0;j<i;j++)
 	{
 		printf(" ");
	 }
 
 for(j=1;j<=5-i;j++)
 	{
 		printf("%d",j);
	 }
 for(k=5-i-1;k>=1;k--)
 	{
 		printf("%d",k);
	 }
	 printf("\n");
 }
 return 0;
}
 

 
 
