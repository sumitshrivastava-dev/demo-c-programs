// wap to find total even numbers present in each row of 3*3 matrix.
#include<stdio.h>
int main()
{
	int i,j;
	int arr[3][3];
	printf("Enter the Elements in the array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);	
		}	
	}
	printf("\n  even numbers present in each row : \n");
	for(i=0;i<=2;i++)
	{
		printf("\nRow %d : ",i+1);
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]%2==0)
			{
				printf("%d ",arr[i][j]);
			}
		}
	}	
}
