//WAP to input 3*5 array and short each row in ascending order.
#include<stdio.h>
int main()
{
	int i,j,k,a=0;
	int arr[3][5];
	printf("Enter the elements in the array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("Element on (%d,%d) : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			for(k=j+1;k<=4;k++)
			{
				if(arr[i][j]>arr[i][k])
				{
					a=arr[i][j];
					arr[i][j]=arr[i][k];
					arr[i][k]=a;
				}
			}
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
