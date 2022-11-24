#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("\t\t\t\tIf Else Programm\n");
	printf("\n Enter Any Number\t\t");
	scanf("%d",&a);
	if(a<50)
	{
		printf("\n\t\tNo.is less than 50");
	}
	else if(a==50)
	{
		printf("\n\t\tNo. is Equal to 50");
	}
	else
	{
		printf("\n\t\tNo. is Greater than 50");
	}
	return 0;
}
