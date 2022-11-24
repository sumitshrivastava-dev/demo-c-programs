//WAP to Input your Annual Income and Print your Tax Amount
//		if amount is >= 5,00,000 : then tax is 30% of Annual income
//		else  :  tax is 5% of Annual income

#include<stdio.h>
int main()
{
	int n,tax;
	printf("Enter total Annual Income : ");
	scanf("%d",&n);
	tax = n>=500000 ? (n*30/100) : (n*5/100);
	printf(" Tax Amount is  : %d \n ",tax);
	printf(" Total Amount Including Tax is  : %d \n ",tax+n);
}
