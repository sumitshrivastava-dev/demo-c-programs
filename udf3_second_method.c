/* wap to make a UDF to check a given number is a amstrong number or not

int armstrong(int num)
output : 	
			return num is a amstrong number
			return num is not a amstrong number	*/

#include<stdio.h>
void main()
{
	int a,number;
	printf("Enter a Number to check Armstrong : ");
	scanf("%d",&a);
	number=armstrong(a);
	if(number==a)
	{
		printf("%d is Armstrong number",a);
	}
	else
	{
		printf("%d is not a Armstrong Number",a);
	}
}
int armstrong(int num)
{
	int n=0,r;
	while(num>0)
	{
		r=num%10;
		n=n+(r*r*r);
		num/=10;
	}
	return n;
}
