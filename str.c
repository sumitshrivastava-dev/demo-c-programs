// wap to input your name and check how many times 'a' is present.

#include<stdio.h>
int main()
{
	int i,count=0;
	char name[100];
	printf("Enter Your Name : ");
	gets(name);
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]=='a')
		{
			count++;
		}
	}
	if(count!=0)
	{
		printf("\n a is presnt %d times in %s",count,name);	
	}
	else
	{
		printf("\n a is not present in %s",name);
	}
	
}
