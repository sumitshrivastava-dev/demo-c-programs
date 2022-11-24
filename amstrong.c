#include<stdio.h>
#include<conio.h>
int main()
{
	int num,j,i,ex=0;
	for(num=0;num<1000;num++)
	{
		for(i=num;i>0;i=i/10)
		{
			j=i%10;
			ex=ex+(j*j*j);
		}
		if(num==ex)
		{
			printf("\n%d is Amstrong Number",ex);
		}
		ex=0;
		j=0;
	}
}	
