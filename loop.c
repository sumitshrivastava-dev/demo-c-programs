#include<stdio.h>
int main()
{
	int i,n=6,num=20;
	int a=0,b,c;
	// 1,3,5,7,9,11,13,15
	
	for(i=1;i<=15;i=i+2)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	// 2,5,8,11,14,17,20
	
	for(i=2;i<=20;i=i+3)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	// 10,8,6,4,2,0
	
	for(i=10;i>=0;i=i-2)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	// 5,10,15,20,25,30,35,40,45,50
	
	for(i=5;i<=50;i=i+5)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	// 8,12,16,20
	
	for(i=8;i<=20;i=i+4)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	
	// 20,15,11,8,6,5
	// int n=6,num=20 
	while(num>5)
	{
		printf("%d\t",num);
		n=n-1;
		num=num-n;
	}
	printf("%d",num);
	
}
