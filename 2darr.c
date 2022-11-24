#include<stdio.h>
int main()
{
//	int arr[3][5]={2,3,8,9,4};								//direct initilization
				//or 
	int arr[3][5]={{2,3,4,6,5},{8,7,9,2,5},{4,6,5,2,9}};	//direct initilization
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
// print only 1st row elements
	printf("\n1st Row Elements : ",arr[i][j]);
	for(j=0;j<=4;j++)
	{
		printf("%d\t",arr[0][j]);
	}
}	
