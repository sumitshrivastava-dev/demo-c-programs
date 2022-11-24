#include<stdio.h>
int main()
{
	int i,n,temp=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
			temp=temp+i;
		}
	}
	if(temp==n)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not a Perfect Number");
	}
}
