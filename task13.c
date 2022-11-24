//wap to input two 3*3 matrix and print sum of both diagonal elements.
#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int arr[3][3];
	int a[3][3];
	printf("Enter the Elements in the 1st array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);	
		}	
	}
	printf("Enter the Elements in the 2nd array :\n");
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
			if(i==j)
			{
				sum=sum+(arr[i][j]*a[i][j]);
			}
		}
	}
	printf("sum of both diagonal elements are : %d",sum);
	
}
