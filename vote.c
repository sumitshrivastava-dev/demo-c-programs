//WAP to input your age and print you are Eligible for Vote or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Your Age : ");
	scanf("%d",&n);
	n>=18 ? printf("You are Eligible for giving Vote"):printf("You are not Eligible for giving Vote");
}
