// Wap to input 10 elements of array and arrange elements of array in decending order.

#include<stdio.h>
void main()
{
	int i,arr[10],n,j;
	for(i=0;i<=9;i++)
	{
		printf("Enter elememt %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(arr[i]<arr[j])
			{
				n=arr[j];
				arr[j]=arr[i];
				arr[i]=n;
			}
		}
	}
	printf("Elements in Decending Order : \n");
	for(i=9;i>=0;i--)
	{
		printf("%d \t",arr[i]);
	}
}
