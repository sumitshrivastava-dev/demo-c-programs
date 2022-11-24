// Write a program in C to display the n terms of odd natural number and their sum.
#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the Number : ");
	scanf("%d",&n);
	printf("The Odd Numbers between 1 to %d are :\n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
			printf("%d\n",i);
		}
	}
	printf("\nSum of odd Numbers are : %d",sum);
}
