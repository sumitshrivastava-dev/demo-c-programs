//wap to input 3*3 array and print transpose of matrix.
#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3];
	int a[3][3];
	printf("Enter the Elements in the array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);	
		}	
	}
	printf("\n Original matrix :\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			a[i][j]=arr[j][i];
		}
	}
		printf("\n Transpose Matrix :\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
