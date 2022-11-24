// Write a C program that read 5 numbers and sum of all odd values between them.

#include<stdio.h>
int main()
{
	int i=0,n=0,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter numbers : ");
		scanf("%d",&n);
		if(n%2 != 0)
		{
			sum=n+sum;
		}
	}
	printf("Sum of all Odd Values between them : %d",sum);
}
