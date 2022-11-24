// wap to compare two strings without using library function.

#include<stdio.h>
int main()
{
	int c;
	char name[100],name1[100];
	printf("Enter a String : ");
	gets(name);
	printf("\nEnter second String : ");
	gets(name1);
	c=comp(name,name1);
	if(c==0)
	{
		printf("\nBoth Strings are Different");
	}
	else
	{
		printf("\nBoth Strings are Same.");
	}
}
int comp(char str[],char str1[])
{
	int i=0,count=0;
	while(str1[i]!='\0' && str[i]!='\0')
	{
		if(str[i]!=str1[i])
		{
			count++;
		}	
		i++;
	}
	if(count!=0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
