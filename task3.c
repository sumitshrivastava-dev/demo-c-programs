//wap to input 10 elememts of array and arrange the elements in Desending Order.

#include<stdio.h>
int main()
{
	int i,j,arr[10],a;
	printf("Enter the Elements : \n");
	for(i=0;i<=9;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("\n\t\t Elements arranged in Descending Order\n");
	for(i=0;i<=9;i++)		
	{
		printf("%d \t",arr[i]);
	}
}
