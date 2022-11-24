/* wap to input your name and 
print name should be greater than 2 characters
if length of name is less than 2
otherwise print hello + name.			*/

#include<stdio.h>
int main()
{
	int i;
	char name[100];
	printf("Enter Your Name : ");
	gets(name);
	start:
	i=strlen(name);
	if(i<=2)
	{
		printf("\n\n\tYour Name Should be greater than 2 Characters.. \n\n");
		printf("Re-Enter Your Name : ");
		gets(name);
		goto start;
	}
	else
	{
		printf("\n\n\t\tHello %s",name);
	}
}
