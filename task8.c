//wap to input two 3*3 array and print addition of both array.
#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3];
	int a[3][3];
	int p[3][3];
	printf("Enter the Elements in the 1st array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);	
		}	
	}
	printf("\nEnter the Elements in the 2nd array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);	
		}	
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			p[i][j]=arr[i][j]+a[i][j];
//			printf("%d\t",arr[i][j]+a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
