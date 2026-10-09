/*write a c program to find the sum of the following series.
1+10+101+1010+...upto terms*/
#include<stdio.h>
int main()
{
	int n,i=1,term=1;
	long long sum=0;
	printf("Enter the number of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0){
			term=term*10+1;
		}
		else{
			term=term*10;
		}
		i++;
		sum=sum+term;
	}
	printf("\nSum=%d",sum);
	return 0;
	
}
