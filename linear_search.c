#include<stdio.h>
#include<conio.h>
int  main()
{
	int array[100],search,i,n;
	printf("Enter numbers of Element in Array\n");
	scanf("%d",&n);
	printf("Enter %d Integers\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("Enter a Number to Search\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(array[i]==search)
		{
			printf("%d is present at location %d.\n",search,i+1);
			break;
		}
		if(i==n)
			printf("%d isn't present in the array.\n",search);
			getch();
	}
	return 0;
}
