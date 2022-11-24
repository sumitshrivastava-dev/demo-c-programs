#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\t\t\t\t\tVowel Program");
	printf("\n\n\t\tEnter Any Alphabate\t");
	scanf("%s",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("%c is Vowel",ch);		
	}	
	else
	{
		printf("%c is not a Vowel",ch);
	}
}
