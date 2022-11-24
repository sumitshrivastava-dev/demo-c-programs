// wap to copy a string in another string without using pre-defined function.
#include<stdio.h>
int main()
{
	char name[100],name1[100];
	printf("Enter a String : ");
	gets(name);
	cpystring(name1,name);
	printf("\nString is : %s",name1);	
}
int cpystring(char str1[],char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	return str1;
}
