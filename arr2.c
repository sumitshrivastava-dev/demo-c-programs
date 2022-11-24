//wap to store 10 int values in a array and print values from last index to zeroth index.

#include<stdio.h>
void main()
{
	int arr[10],i;
	printf("Enter 10 Values : \n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElements of Array in Decreasing order of index are :\n");
	for(i=9;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
}
