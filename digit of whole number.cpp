//wap to count the digits of a whole number
#include<stdio.h>
int main()
{
	int n;
	int count=0;
	printf("Enter the number:");
	scanf("%d",&n);//456
	while(n>0)
	{
		count++;
		n/=10;
	}
	printf("\n count of digits=%d",count);
}
