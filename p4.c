// WAP to Input a number and check number is divisible by 2,3 and 5 or  not.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any Number : ");
	scanf("%d",&n);
	if(n%2==0 && n%3==0 && n%5==0)
	{
		printf("The number %d is Divisible by 2, 3 and 5",n);
	}
	else if(n%2==0 && (n%3==0 || n%5==0))
	{
		if(n%3==0)
		{
			printf("The number %d is Divisible by 2 and 3 but not 5",n);
		}
		else
		{
			printf("The number %d is Divisible by 2 and 5 but not 3",n);
		}
	}
	else if(n%3==0 && (n%5==0 || n%2==0))
	{
		if(n%2==0)
		{
			printf("The number %d is Divisible by 2 and 3 but not 5",n);
		}
		else
		{
			printf("The number %d is Divisible by 3 and 5 but not 2",n);
		}
	}
	else if(n%5==0 && (n%3==0 || n%2==0))
	{
		if(n%3==0)
		{
			printf("The number %d is Divisible by 3 and 5 but not 2",n);
		}
		else
		{
			printf("The number %d is Divisible by 2 and 5 but not 3",n);
		}
	}
	else
	{
		if(n%2==0)
		{
			printf("The number %d is Divisible by 2 but not 3 and 5",n);
		}
		
		else if(n%3==0)
		{
			printf("The number %d is Divisible by 3 but not 2 and 5",n);
		}
		
		else if(n%5==0)
		{
			printf("The number %d is Divisible by 5 but not 2 and 3",n);
		}
		else
		{
			printf("The number %d is not divisible by 2,3 and 5",n);
		}
	}
}
