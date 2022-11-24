//wap to find length of the string without using pre-defined function
#include<stdio.h>
int main()
{
	char name[100];
	int len;
	printf("Enter a String : ");
	gets(name);
	len=stringlen(name);
	printf("\n Length of String : %d",len);
}
int stringlen(char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
