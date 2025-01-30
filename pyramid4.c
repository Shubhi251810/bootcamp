#include<stdio.h>
int main()
{
 int i,j;
 char n='A',m='E';
 for(i=0;i<=m;i++)
 {
  for(j=n;j<=2*m-i;j++)
 	{
 		printf(" ");
	 }
 
 for(j=n;j<=i;j++)
 	{
 		printf("%c",j);
	 }
 
 for(j=i+1;j>=n;j--)
 	{
 		printf("%c",j);
	 }
	 printf("\n");
 }
 return 0;
}
 

 
 
