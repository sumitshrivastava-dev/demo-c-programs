#include<stdio.h>
#include<conio.h>
int main()
{
	int num,ex,i;
	printf("Enter Any Number \t");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is Even",num);
	}
	else
	{
		printf("\n%d is Odd",num);
	}
	return 0;
}
