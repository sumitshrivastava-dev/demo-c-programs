//wap to input 3*3 array and print last column value of each row.
#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3];
	printf("Enter the Element in 2D Array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element at (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix is :\n");
	for(i=0;i<=2;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	printf("\nlast column value of each row :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(j==2)
			{
				printf("(%d,%d) element is : %d\n",i,j,arr[i][j]);
			}
		}
	}
}
