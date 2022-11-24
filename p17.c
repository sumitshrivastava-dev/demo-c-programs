// C Program to Find the Sum of first 50 Natural Numbers using For Loop

#include<stdio.h>
int main()
{
	int n=0,sum=0,i;
	printf("Calulating the sum of first 50 Natural Number\n");
	for(i=1;i<=50;i++)
	{
		n=i;
		sum=sum+n;
		n=0;
	}
	printf("Sum = %d",sum);
}
