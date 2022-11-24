// Fibacci

#include<stdio.h>
int main()
{
	int i,n,num=0,rem=0,temp;
	int a=0,b=1;
	printf("Enter a two Number to find fibonacci series  : ");
	scanf("%d",&n);
	temp=n;
	printf("fibonacci series : %d \t%d \t",a,b);
	num=a+b;
	while(num<=n)
	{
		printf("%d \t",num);
		a=b;
		b=num;
		num=a+b;
	}
}
