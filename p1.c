//C Program to read two integers M and N & swap their value without using Third variable.

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 Numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before Swapping the NUmbers : a = %d \t b = %d \n",a,b);
	b=a*b;
	a=b/a;
	b=b/a;
	printf("After Swapping the NUmbers : a = %d \t b = %d ",a,b);
}

//C Program to read two integers M and N & swap their value using Third variable.

/* 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 2 Numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before Swapping the NUmbers : a = %d \t b = %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping the NUmbers : a = %d \t b = %d ",a,b);
}
*/
