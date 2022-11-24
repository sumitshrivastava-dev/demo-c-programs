// Write a C program to print all numbers between 1 to 500 which divided by a 
// specified number and the remainder will be 3.

#include<stdio.h>
int main()
{
	int i,n=500,num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	printf("All Numbers are :\n");
	for(i=1;i<=n;i++)
	{
		if(i%num==3)
		{
			printf("%d\n",i);
		}
	}
}
