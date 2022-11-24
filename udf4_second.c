#include<stdio.h>
void main()
{
	int i,rev;
	for(i=1;i<=1000;i++)
	{
		if(i==reverse(i))
		{
			printf("%d \n",i);
		}
	}
}
int reverse(int num)
{
	int n,rev=0;
	while(num>0)
	{
		n=num%10;
		rev=rev*10+n;
		num/=10;
	}
	return rev;
}
