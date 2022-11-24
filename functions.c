// wap to use strcmp
#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	char name[100],temp[100];
//	printf("Enter your name : ");
//	gets(str1);
//	printf("Enter your last name : ");
//	gets(str2);
//	
	// strcmp
	
//	int res=strcmp(str1,str2);
//	printf("Return value of strcmp : %d",res);
	
	// strncmp
	
//	int res=strncmp(str1,str2,4);				//upto 4 cha
//	printf("Return value of strcmp : %d",res);
	
	// strrev
	
//	printf("Reverse value : %s",strrev(str1));
	
	//
	printf(" Enter a String : ");
	gets(name);
	strcpy(temp,name);
	strrev(name);
	if(strcmp(namenitin,temp)==0)
	{
		printf("\n%s is a Polindrome String",temp);	
	} 
	else
	{
		printf("\n%s id Not Polindrome String",temp);
	}
}

