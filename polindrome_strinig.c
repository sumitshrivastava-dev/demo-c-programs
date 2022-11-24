//wap to check polindrome string.
#include<stdio.h>
int main()
{
	char name[100],temp[100];
	printf(" Enter a String : ");
	gets(name);
	strlwr(name);
	strcpy(temp,name);
	strrev(name);
	if(strcmp(name,temp)==0)
	{
		printf("\n%s is a Polindrome String",temp);	
	} 
	else
	{
		printf("\n%s id Not Polindrome String",temp);
	}
}
