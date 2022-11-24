// WAP to input a number and check number is even or odd

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number ");
	scanf("%d",&n);
	n%2==0 ? printf("The Number %d is Even ",n) : printf("The Number %d is Odd",n);
}
