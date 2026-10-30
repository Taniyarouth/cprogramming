//write a c program whether a number is perfecxt or not 
#include<stdio.h>
int main()
{
	int n,s=0,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		s+=i;
		i++;
	}
	if(s==n)
	printf("It is a perfect number");
	else
	printf("It is not a prime number");
	return 0;
}
