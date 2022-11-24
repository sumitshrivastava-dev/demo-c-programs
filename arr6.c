//Wap to input 10 elements of array and count total even and odd Values present in array.
#include<stdio.h>
void main()
{
	int arr[10],i,ch,j,che,op;
	s:
	for(i=0;i<=9;i++)
	{
		printf("Enter Number %d :\t",i+1);
		scanf("%d",&arr[i]);
	}
	start:
	che=0;
	printf("\nEnter 1 for Even Elements\nEnter 2 for odd Elements\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Even Elements are :\n");
			for(j=0;j<=9;j++)
			{
				if(arr[j]%2==0)
				{
					printf("%d\n",arr[j]);
					che++;
				}
			}
			printf("\nTotal no of Even Elements = %d",che);
			break;
		case 2:
			printf("Odd Elements are :\n");
			for(j=0;j<=9;j++)
			{
				if(arr[j]%2!=0)
				{
					printf("%d\n",arr[j]);
					che++;
				}
			}
			printf("\nTotal no of Odd Elements = %d",che);
			break;
		default:
			printf("!!!! Invalid Input !!!!");
			;
	}
	printf("\nWant to Continue ? press 1 / press 0 to Cancel:\t");
	scanf("%d",&op);
	if(op==1)
	goto s;
	else
	printf("\n\n\n\t\t\tThank You.");
}
