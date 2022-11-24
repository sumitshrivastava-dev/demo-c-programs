//wap to input 10 elements and perform linear searching and print the indexes where num is found.

#include<stdio.h>
void main()
{
	int i,j,ch,num=0;
	int arr[10],a[10];
	printf("Enter 10 Elements : \n");
	for(i=0;i<=9;i++)
	{
		printf("Element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to check : ");
	scanf("%d",&ch);
	for(j=0;j<=9;j++)
	{
		if(ch==arr[j])
		{
			printf("On Index ");
			a[j]=j;	
			num++;
			printf("%d",a[j]);
		}	
		printf("\n");
	}
	printf("%d is %d times present in array",ch,num);
}
