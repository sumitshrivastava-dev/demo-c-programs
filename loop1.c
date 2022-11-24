#include<stdio.h>
int main()
{
	// 2,5,9,15,21,35
	int i,n=0;
	for(i=2;i<5;i=i+n)
	{
		n=0;
		printf("%d\t",i);
		n=n+3;
	}
	for(i=5;i<9;i=i+n)
	{
		n=0;
		printf("%d\t",i);
		n=n+4;
	}
	for(i=9;i<27;i=i+n)
	{
		n=0;
		printf("%d\t",i);
		n=n+6;
	}
	for(i=27;i<=35;i=i+n)
	{
		n=0;
		printf("%d\t",i);
		n=n+8;
	}
}
	
