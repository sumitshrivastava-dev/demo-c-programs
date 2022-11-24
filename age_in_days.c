// WAP to print your age in years(float) and print total days of your age.

#include<stdio.h>
int main()
{
	int n,age;
	printf("Enter your age : ");
	scanf("%d",&n);
	age = n*365;
	printf("Total Days of your age : %d ",age);
}
