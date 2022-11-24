// Write a program in C to display the multiplication table vertically from 1 to n.

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}
