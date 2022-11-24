// WAP to Calculate the Power of the Value using udf
#include<stdio.h>
void main()
{
//	int base,power;
//int res = pow2(5);
//printf("res = %d",res);
int a,b;
printf("Enter the Base and Power Value : ");
scanf("%d%d",&a,&b);
int res = power(a,b);
printf("res = %d",res);
}
int pow2(int base)
{
	return base*base;
}
int power(int base,int power)
{
	int i,res=1;
	for(i=1;i<=power;i++)
	{
		res=res*base;
	}
	return res;
}
