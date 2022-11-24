//WAP to input 4 values and print largest number.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter 1st Number : ");
	scanf("%d",&a);
	printf("Enter 2nd Number : ");
	scanf("%d",&b);
	printf("Enter 3rd Number : ");
	scanf("%d",&c);
	printf("Enter 4th Number : ");
	scanf("%d",&d);
	a>b && a>c && a>c ? printf(" %d is greater ",a) : (b>c && b>d && b>a) ? printf(" %d is greater",b )
			: (c>d && c>a && c>b) ? printf("%d is greater",c) : printf("%d is greater",d)  ;
}
