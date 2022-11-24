/* wap to make a UDF to check a given number is a amstrong number or not

int armstrong(int num)
return 1 if num is a amstrong number
return 0 if num is not a amstrong number	*/

#include<stdio.h>
void main()
{
	int a,number;
	printf("Enter a Number to check Armstrong : ");
	scanf("%d",&a);
	if(armstrong(a)==1)
	{
		printf("%d is Armstrong number",a);
	}
	else
	{
		printf("%d is not a Armstrong number",a);
	}
}
int armstrong(int num)
{
	int n=0,r;
	int flag=num;
	while(num>0)
	{
		r=num%10;
		n=n+(r*r*r);
		num/=10;
	}
	if(flag==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
