// Wap to input 10 elements of array and arrange elements of array in ascending order.

#include<stdio.h>
void main()
{
	int arr[10],i,n=0,j,che=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter Number %d :\t",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[i]>arr[j])
			{
				n = arr[i];
				arr[i]=arr[j];
				arr[j]=n;
			}
		}	
	}
	printf("The Elements arranged in ascending order are\n");
	for (i = 0; i <=9; ++i)
    printf("%d\n", arr[i]);
 
}
