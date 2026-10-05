// write a c program to reverse the digits of a whole number
#include<stdio.h>
int main()
{
	int n, rev=0, digit;
	printf("Enter the whole number to reverse:");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	printf("Reversed value will be :%d",rev);
	return 0;
}
