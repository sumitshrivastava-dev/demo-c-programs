#include<stdio.h>

int main()
{
	int num,reverse,temp,remainder;
	printf("Enter a Number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
	}
	printf("Given Number : %d",temp);
	printf("\nReverse number : %d\n",reverse);
	if(reverse==temp)
	{
		printf("The Number is Palindrome");
	}
	else
	{
		printf("The number is not Palindrome");
	}
}
