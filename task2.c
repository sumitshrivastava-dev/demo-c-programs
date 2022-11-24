//WAP to search a element in a given number list by using binary searching.

#include<stdio.h>
int main()
{
	int i,j,ch,t=0;
	int first,last,n;
	int arr[50];
	int mid=0;
	printf("Enter number of Elements in array (1-50) : ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter element on index %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("\nEnter a number to check Elements in array : ");
	scanf("%d",&ch);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid]<ch)
		{
			first=mid+1;
		}
		else if(arr[mid]==ch)
		{
			printf("\n%d found in the array at %d index",ch,mid);
			break;
		}
		else
		{
			last=mid-1;
		}
		mid=(first+last)/2;
	}
	if(first>last)
	{
		printf("%d Element is not in the Array\n",ch);
	}
	printf("\n\t\t Elements arranged in Ascending Order\n");
	for(i=0;i<=9;i++)			// to sorting and print the elements in a order(asc/des)
	{
		printf("%d \t",arr[i]);
	}
}







