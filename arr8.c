//Wap to input 6 subject marks and print the marks that is greater than average.

#include<stdio.h>
void main()
{
	int arr[6],i,j,sum,avg=0;
	for(i=0;i<=5;i++)
	{
		printf("Enter Subject Marks %d :\t",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/6;
	printf("\nAverage Marks = %d\n",avg);
	for(j=0;j<=5;j++)
	{
		if(avg<arr[j])
		{
			printf("%d\n",arr[j]);
		}
	}
}
