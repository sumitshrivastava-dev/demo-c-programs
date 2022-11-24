// wap to calculate ncr
#include<stdio.h>
void main()
{
	int n,r,i,factn=1,factr=1,factnr=1;
	printf("Enter n and r to Calculate ncr : ");
	scanf("%d%d",&n,&r);
/*	for(i=1;i<=n;i++)
	{
		factn=factn*i;
	}
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
	}
	for(i=1;i<=n-r;i++)
	{
		factnr=factnr*i;
	}
*/
	factn=factorial(n);
	factr=factorial(r);
	factnr=factorial(n-r);
	printf("ncr = %d",factn/(factr*factnr));
}

int factorial(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}







