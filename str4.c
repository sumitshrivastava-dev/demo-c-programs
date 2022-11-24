//wap to find short form of your name
#include<stdio.h>
int main()
{
	int i,j=2,sp;
	char name[100],sortname[100];
	printf("Enter Your Name : ");
	gets(name);
	sortname[0]=name[0];
	sortname[1]='.';
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]==' ')
			{
				sortname[j]=name[i+1];
				sortname[j+1]='.';
				j+=2;
				sp=i;
			}
	}
	j=j-2;
	//get all character of name from last space index to length.
	for(i=sp+1;s<strlen(name);i++)
	{
		sortname[j]=name[i];
		j++;
	}
	sortname[j]='\0';
	printf("\nShort Name : %s",sortname);
	
}
