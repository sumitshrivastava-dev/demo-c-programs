//wap to input two 3*3 array and check the matrix is identity or not.
#include<stdio.h>
int main()
{
	int i,j,count=0;
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
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j && arr[i][j]==1)
			{
				count++;
			}
			else if(i!=j && arr[i][j]==0)
			{
				count++;
			}
		}
	}
//	printf("%d",count);
	if(count==9)
	{
		printf("\n \tMatrix is Identity");
	}
	else
	{
		printf("\n \tMatrix is not Identity");
	}
	printf("\n matrix :\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
