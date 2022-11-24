#include<stdio.h>
#include<conio.h>
int main()
{
	int i,count,half,num;
	for(i=1;i<100;i++)
	{		
		if(i%2==0)
			{
				half=i/2;
			}
		else
			{
				half=(i-1)/2;
			}
	for(num=half;num>1;num--)
	{
		if(i%half==0)
		{
			count++;
		}
	}	
	numbf(count==0)
	{
		printf("%d is Prime Number\n",i);
	}
	count=0;
  }
}
