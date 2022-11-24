//WAP to input total shopping amount and calculate your total bill:
//	shopping amount >= 5000 ? discount 10% : discount 5% ;

#include<stdio.h>
int main()
{
	int n;
	printf("Enter Total Shopping Amount : ");
	scanf("%d",&n);
	n>=5000 ? printf("Total Discount : %d",(n*10)/100)	:  printf("Total Discount : %d",(n*5)/100);
} 
