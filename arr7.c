//Wap to input 6 subject marks and find sum and average of marks.

#include<stdio.h>
void main()
{
	int arr[6],i,sum;
	for(i=0;i<=5;i++)
	{
		printf("Enter Subject Marks %d :\t",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("\nSum of All Subject's marks are : %d",sum);
	printf("\n Average Marks : %d",sum/6);
}
