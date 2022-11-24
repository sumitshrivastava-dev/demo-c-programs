// Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the Number : ");
	scanf("%d",&n);
	printf("Table of %d is : \n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i*n);
	}
}
