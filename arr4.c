//Wap to input 10 elements of array and check a given number is present in array or not.

#include<stdio.h>
void main()
{
	int arr[10],i,ch,j,che=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter Number %d :\t",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to check the number is present or not : ");
	scanf("%d",&ch);
	for(j=0;j<=9;j++)
//	{
//		if(ch==arr[j])
//		{
//			che++;
//		}
//	}
//	if(che!=0)
//	{
//		printf("\n%d is Available in the Array",ch);
//	}
//	else
//	{
//		printf("\n%d is not Available in the Array",ch);
//	}
	{
		if(ch==arr[j])
		{
			printf("\nSearch Successful ! Number is Present");
			break;
		}
	}
	if(j==10)
	{
		printf("\n Number is not Present");
	}
}
