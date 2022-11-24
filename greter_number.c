// WAP to input 3 number and find greatest number 

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first Number : ");
	scanf("%d",&a);
	printf("Enter second Number : ");
	scanf("%d",&b);
	printf("Enter third Number : ");
	scanf("%d",&c);
	a>b && a>c ? printf("%d is Greater",a):(b>c && b>a ? printf("%d is greater",b):printf("%d is greater",c));
}
