/* WAP to create a UDF to check a number is a Prime or Not
	int prime(int num)
	return 1 if prime
	return 0 if not prime
		Use this UDF to find all prime numbers within 1 to 1000.
*/

#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter a number to check prime : ");
	scanf("%d",&num);
	if(prime(num)==0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not Prime");
	}
	//	Using this UDF to find all prime numbers within 1 to 1000.
	printf("\n");
	printf("All Prime number between 1 to 1000 are : \n");
	for(i=1;i<=1000;i++)
	{
		if(prime(i)==0)
		{
			printf("%d\t",i);
		}
	}
}
int prime(int num)
{
	int i,count=0;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
