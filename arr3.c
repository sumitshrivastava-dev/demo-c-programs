// 	Wap to input 10 elements of array and find largest element of array

#include<stdio.h>
void main()
{
	int arr[10],i,a,b;
	for(i=0;i<=9;i++)
	{
		printf("Enter Number %d :\t",i+1);
		scanf("%d",&arr[i]);
	}
	for(a=0;a<=9;a++)
	{
		if(arr[0]<arr[a])
		{
			arr[0]=arr[a];
		}
	}
	printf("\n\nLargest Number is %d",arr[0]);
}
