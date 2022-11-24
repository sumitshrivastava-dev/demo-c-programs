/* wap to input a string and count total lowercase aplhabates,
uppercase and digits and special symbols is string.

	ex: techpile@123 
	
	output:	
		uppercase :1
		lowercase :7
		special symbol : 1
		digits :3				*/
		
#include<stdio.h>
int main()
{
	int l=0,u=0,s=0,d=0,i=0;
	char str[100];
	printf("Enter a String : ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			l++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			u++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d++;
		}
		else
		{
			s++;
		}
	}
	printf("\n Total UpperCase in String : %d",u);
	printf("\n Total LowerCase in String : %d",l);
	printf("\n Total Special Symbol in String : %d",s);
	printf("\n Total Digits in String : %d",d);
}
