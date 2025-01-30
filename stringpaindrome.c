//reverse the string using recursion.
#include<stdio.h>
#include<string.h>
int str(char n[],int i,int j)
{
	if(i>=j)
	return 0;
	char temp=n[i];
			n[i]=n[j];
			n[j]=temp;
			str(n,i+1,j-1);
}
int palin(char n[])
{
	int left=0;
	int right=strlen(n)-1;
	while(left<right)
	{
		if(n[left]!=n[right])
		{
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}
int main()
{
	char n[100]="madam";
	int a=strlen(n);
	str(n,0,a-1);
	printf("%s \n",n);
	if(palin(n))
	{
		printf("yes");
	}
	else
	{
	printf("no");
    }
	return 0;
}
