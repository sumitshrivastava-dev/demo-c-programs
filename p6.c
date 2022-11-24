// WAP to count digits of NUmber

#include<stdio.h>
int main()
{
	int n;
	int count;
	printf("Enter number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf(" Number of Digits : %d",count);
}
