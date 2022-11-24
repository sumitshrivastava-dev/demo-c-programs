// Write a program in C to display the cube of the number up to given an integer

#include<stdio.h>
int main()
{
	int n,i=0,cube;
	printf("Enter the number of Terms :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		printf("The Number is %d and Cube of the number is %d\n",i,cube);
	}
}
