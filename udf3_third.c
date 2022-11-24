#include<stdio.h>
#include<math.h>
int digit(int num)
{
	int count=0;
	while(num>0)
	{
		count++;
		num/=10;
	}
	return count;
}
int armstrong(int num)
{
	int n=0,r;
	int d=digit(num);
	int flag=num;
	while(num>0)
	{
		r=num%10;
		n=n+pow(r,d);
		num/=10;
	}
	if(flag==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int i,res;
	for(i=1;i<=10000;i++)
	{
		res=armstrong(i);
		if(res==1)
		{
			printf("%d is Armstrong\n",i);
		}
	}
	
}
