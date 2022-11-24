//wap to create a udf to swap two numbers

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers : ");
	scanf("%d%d",&a,&b);
	printf("\nbefore Swapping : a= %d and b= %d",a,b);
	swap(a,b);		//call by value : when copy of values is passed as the actual argument.
}
void swap(int n1,int n2)
{
	int t;
	t=n1;
	n1=n2;
	n2=t;
	printf("\n After sawpping a= %d and b= %d",n1,n2);
}
