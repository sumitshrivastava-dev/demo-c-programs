/* WAP in c to take input from user of 10 number 

print : total sum
print : sum of all even numbers 
print : sum of all odd numbers

*/

#include<stdio.h>
int main()
{
	int i=0,n,e_sum=0,o_sum=0,sum;
	for(i=0;i<10;i++)
	{
		printf("Enter the Number : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			e_sum=n+e_sum;
		}
		else
		{
			o_sum=n+o_sum;
		}
	}
	sum=e_sum+o_sum;
	printf("Sum of all Even Numbers are = %d",e_sum);
	printf("\n Sum of all odd NUmbers are = %d ",o_sum);
	printf("\n Total Sum = %d",sum);
}
