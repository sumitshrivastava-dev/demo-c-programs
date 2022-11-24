//wap to input a character and swap the case of character

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character : ");
//	scanf("%s",&ch);
//  ch=getchar();		
//	ch=getch();			// not show on the screen,and executes next line imediatly
	ch=getche();		// shown on the screen
	if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("\nCharacter is %c",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("\nCharacter is %c",ch);
		
	}
}
