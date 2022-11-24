//wap to find sum of square of elements in a given 3*3 matrix.

#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int arr[3][3],a[3][3];
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
			a[i][j]=(arr[i][j]*arr[i][j]);
			sum+=a[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of Square of Matrix : %d",sum);
}
