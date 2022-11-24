//WAP to input a 3*3 array and print all even index rows elements
int main()
{
	int i,j;
	int arr[3][3];
	printf("Enter the Element in 2D Array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Element at (%d,%d)",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nMatrix is :\n");
	for(i=0;i<=2;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
	}
	printf("\n\nAll Even index rows Elements are : ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i%2==0 && j%2==0)
			{
				printf("%d\t",arr[i][j]);
			}
		}
	}
}
