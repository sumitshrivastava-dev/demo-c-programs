// Write a C program that prints all even numbers between 1 and 50 (inclusive).

#include<stdio.h>
int main()
{
	int n,i;
	printf("Even Number between 1 to 50 are :\n");
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
