// Write a program in C to read 10 numbers from keyboard and find their sum and average.	

#include<stdio.h>
int main()
{
	int i=0,n=0,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter no : ");
		scanf("%d",&n);
		sum=n+sum;
	}
	printf("Sum of the Numbers are : %d",sum);
	printf("\n Average of the Numbers : %d",sum/10);
}
