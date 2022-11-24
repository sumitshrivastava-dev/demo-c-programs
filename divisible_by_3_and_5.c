// WAP to input a number and check the number is divisible by 3 and 5 both or not

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n%3==0 && n%5==0 ? printf("The Number %d is divisible by 3 and 5 both ") : printf("The Number %d is not divisible by 3 and 5 both")	;
}
