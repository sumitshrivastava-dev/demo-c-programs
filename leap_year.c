//WAP to input year (2001) and print that this year is Leap year or not
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Year : ");
	scanf("%d",&n);
	n%4==0 ? printf("This Year (%d) is Leap Year",n):printf("This Year (%d) is non Leap Year",n);
}
