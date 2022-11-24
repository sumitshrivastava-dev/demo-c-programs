// Compute the Sum of Digits in a given Integer

#include<stdio.h>
int main()
{
	int n,i,sum,j;
	printf("Enter the Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		j=n%10;
		sum=sum+j;
		n/=10;
	}
	printf("Sum = %d",sum);
}
