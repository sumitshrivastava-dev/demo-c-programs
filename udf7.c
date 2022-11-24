// wap to create UDF
#include<stdio.h>
void main()
{
	int a,b,ch;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("Enter 1 to Addition\nEnter 2 to Subtract\nEnter 3 to Multiply\nEnter 4 to Divide\n\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			sum(a,b);
			break;
		case 2:
			printf("Substraction = %d \n ",sub(a,b));
			break;
		case 3:
			printf("Multiplication = %d \n ",mul(a,b));
			break;
		case 4:
			div(a,b);	
			break;
		default:
			printf("Invalid Input");
			break;875484
	}
}
void sum(int a,int b)
{
	printf("Sum = %d \n",a+b);
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
void div(int a,int b)
{
	printf(" Division = %d \n",a/b);
}

