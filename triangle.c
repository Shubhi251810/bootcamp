//WAP to find if a triangle is valid based on angles or sides. 
#include<stdio.h>
int main()
{
	int a,b,c;
	int x,y,z;
     printf("Enter the sides:");
	 scanf("%d %d %d",&a,&b,&c);
	 printf("Enter the angle:");
	 scanf("%d %d %d",&x,&y,&z);
	 if(a==b&&b==c&&a==c)
	 {
	 	printf("equivalance triangle");
	 }
	 else if(a+b==c&& b+c==a&& a+b==c)
	 {
	 	printf("right angle triangle");
	 	
	 }
	 else if(a==b||b==c||c==a)
	 {
	 	printf("isoceles triangle");
	 }
	 else if(a+b>c&&a+c>b&&b+c>a)
	 { 
	    if(x+y+z==180)
	{
	 	printf("valid traingle");
	}
    }
    else 
    {
    	printf("not a triangle");
	}
	return 0;
	 
}
