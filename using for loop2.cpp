// write a c program to check whether a number prime or not using while loop and for loop.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<=1){
		printf("Not a prime number:");
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				break;
			}
			
		}
		if(i==n)
		{
			printf("Prime number");
		}
		else
		{
			printf("Not a prime number");
		}
	}
	return 0;
	
}
