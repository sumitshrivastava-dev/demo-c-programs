/* wap to input your old pass,new pass and confirm pass
print password changed successfully
if pass and confir pass is same
and new pass doesnot match to old pass
and new pass is greater than 8 characters

print new pass should be differ from old pass
if new pass and old pass is same.

print new pass and confirm pass does not match
if new pass and confirm pass is not same.			*/

#include<stdio.h>
int main()
{
	int i,n,o;
	char oldpass[100];
	char newpass[100];
	char confpass[100];
	old:
	printf("Enter Your Old Password : ");
	gets(oldpass);
	newp:
	printf("Enter Your New Password : ");
	gets(newpass);
	printf("Enter Your Confirm Password : ");
	gets(confpass);
	conf:
	n=strcmp(newpass,confpass);
	o=strcmp(oldpass,newpass);
	if(o==0)
	{
		printf("\n\n\tNew Password Should be Different from old pass !!\n\n");
		goto old;
	}
	else if(strlen(newpass)<8)
	{
		printf("\n\n\tNew Password Should be more than 8 Characters !!!\n\n");
		goto newp;
	}
	else if(n!=0)
	{
		printf("\nNew Password and Confirm Password Doesn't match !! \n\n");
		printf("Re-Enter Your New Password : ");
		gets(newpass);
		printf("Re-Enter Your Confirm Password : ");
		gets(confpass);
		goto conf;
	}
	else if(o!=0 && n==0)
	{
		printf("\n\t!! Password Changed Successfully. !!");
	}
	
	
	
}
