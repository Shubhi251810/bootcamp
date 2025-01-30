
#include<stdio.h>
int main()
{   
    int i,n;
	int t1=0,t2=1,s=0;
	 printf("enter the number:");
	 scanf("%d",&n);
	 printf("fibonacci series %d %d",t1,t2);
	 for(i=3;i<=n;++i)
	 {
	 	s=t1+t2;
		printf("%d",s);
	 	t1=t2;
	 	t2=s;
	 
	 }
	 return 0;
}
