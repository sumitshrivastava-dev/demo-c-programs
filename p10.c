// Write C program to check even or odd number using switch case.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any Number : ");
	scanf("%d",&n);	
	switch(n%2)
	{
		case 0:
			printf("Even Number");
		break;
		case 1:
			printf("Odd Number");
		break;
	}
}
