//	wap to input your techpile userid and password 
//	and print welcome to techpile if userid starts with techpileapp22
//	and password is tech123.

#include<stdio.h>
int main()
{
	int i,no=0,yes=0;
	char id[100],pass[100];
	char id1[100]={"techpileapp22"},passw[100]={"tech123"};
	printf("Enter Your Techpile Id : ");
	gets(id);
	printf("Enter the Password : ");
	gets(pass);
	no=strncmp(id1,id,13);
	yes=strcmp(passw,pass);
	if(no==0 && yes==0)
	{
		printf("\n\n\t\tWelcome to Techpile");
	}
	else
	{
		printf("\n\n\t !! Invalid Id or Pass !!");
	}
}
