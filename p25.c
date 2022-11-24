/* Write a C program to read a password until it is correct. For wrong password print 
"Incorrect password" and for correct password print "Correct password" and quit 
the program. The correct password is 1234.	*/

#include<stdio.h>
int main()
{
	int pass;
	printf("Enter the Password : ");
	scanf("%d",&pass);
	while(pass!=1234)
	{
		printf("Invalid Password !!\n");
		printf("Re-Enter Your Password : ");
		scanf("%d",&pass);
	}
	printf("Correct Password\n");
}
