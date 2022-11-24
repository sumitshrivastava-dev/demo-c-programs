//wap to input a string and check how many vowels are present in the string.
#include<stdio.h>
int main()
{
	char name[100];
	int count=0,i;
	printf("Enter your name : ");
	gets(name);
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]=='a')
		{
			count++;
			continue;
		}
		else if(name[i]=='e')
		{
			count++;
			continue;
		}
		else if(name[i]=='i')
		{
			count++;
			continue;	
		}	
		else if(name[i]=='o')
		{
			count++;
			continue;
		}
		else if(name[i]=='u')
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\nNo Vowels are present in your Name.");
	}
	else
	{
		printf("\n%d Vowels are present in your name.",count);
	}
	
}
