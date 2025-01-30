//character is vowal, consonent and char.
#include<stdio.h>
int main()
{
	char ch; 
	char c;
		printf("Enter the character:");
	scanf("%c",&c);
		printf("Enter the vowal:");
	scanf("%d",&ch);
	if(c==ch)
	{
		printf("vowal");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
