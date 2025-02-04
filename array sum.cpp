#include<stdio.h>
int main()
{
	int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	int evensum=0,oddsum=0,i;
	for(int i=0;i<12;i++){
		if(arr[i]%2==0)
		{
			evensum = evensum +arr[i];
		}
		else
		oddsum= oddsum +arr[i];
	}
	printf("print even=%d",evensum);
	printf("print odd=%d",oddsum);
	return 0;
}
