#include<stdio.h>
int sum(int a ,int b){
	return a+b;
}
int main(){

int b,a,d;
printf("enter the number ");
scanf("%d %d",&a, &b);
d = sum(a,b);
printf("%d",d);
return 0;
}
