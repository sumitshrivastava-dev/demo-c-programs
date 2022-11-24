#include<stdio.h>
int main()
{
	int num=20,i,n=5;
	for(i=num;i>15;i=i-n)
	{
		printf("%d\t",i);
	}
	num=num-n;
	n=n-1;
	for(i<15;i>11;i=i-n)
	{
		printf("%d\t",i);
	}
	num=num-n;
	n=n-1;
	for(i<11;i>8;i=i-n)
	{
		printf("%d\t",i);
	}
	num=num-n;
	n=n-1;
	for(i<8;i>2;i=i-n)
	{
		printf("%d\t",i);
	}
	printf("n = %d\t",n);
}
