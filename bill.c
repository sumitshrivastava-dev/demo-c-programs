//WAP to Input Your Electricity unit and print total bill amount
//		if unit is >=200 ? then charge @10rs : then charge @5rs;

#include<stdio.h>
int main()
{
	int n;
	printf("Enter Your Electricity Bill : ");
	scanf("%d",&n);
	n>=200 ? printf("Total bill Amount is : %d",n*10):printf("Total bill Amount is : %d",n*5);
}
