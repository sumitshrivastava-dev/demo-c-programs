//WAP to input 10 elements of array and seperate even elements in a array and odd elements 
//  in another array.

#include<stdio.h>
int main()
{
	int i,j,k,x=0,y=0;
	int a[10],b[10],c[10];
	printf("Enter Elements in the Array : \n");
	for(i=0;i<=9;i++)
	{
		printf("element %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			b[x]=a[i];
			x++;
		}
		else
		{
			c[y]=a[i];
			y++;
		}
	}
	printf("\nEven Elements are : ");
	for(i=0;i<=x-1;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n\nOdd Elements are : ");
	for(i=0;i<=y-1;i++)
	{
		printf("%d\t",c[i]);
	}
}
