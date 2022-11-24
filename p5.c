// 1,3,5,7,9,11,13,15

#include<stdio.h>
int main()
{
	int i,n=15,c;
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;)
		if(n%i==2)
		{
			c++;
			printf("%d",c);
		}
		
	}
}
