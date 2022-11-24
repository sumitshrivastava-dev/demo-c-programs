/* wap to swapcase of a string characters without using library function.
	enter a string : techPILE
	outout :		TECHpile
	*/
#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter a String : ");
	gets(name);
	printf("\n%s",inv(name));
}
int inv(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	return str;
}
