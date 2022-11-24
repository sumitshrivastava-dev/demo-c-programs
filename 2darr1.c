// WAP to input 5 subject marks of 3 students and print total of all students marks.
#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int arr[3][5];
	for(i=0;i<=2;i++)
	{
		printf("\tEnter %d student Details \n\n",i+1);
		for(j=0;j<=4;j++)
		{
			printf("Enter marks of subject %d : ",j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=4;j++)
		{
			sum+=arr[i][j];
		}
	printf("\n\nTotal marks of %d student is : %d out of 500",i+1,sum);
	sum=0;	
	}
}
