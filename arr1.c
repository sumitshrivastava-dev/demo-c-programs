// wap to input five subject marks and find total and average
#include<stdio.h>
void main()
{
	int s[5],sum,i
	;
	printf("Enter 5 subject marks : ");
//	scanf("%d%d%d%d%d",&s[0],&s[1],&s[2],&s[3],&s[4]);
	for(i=0;i<=4;i++)
	{
		scanf("%d",&s[i]);
		sum+=s[i];
	}
//	sum=s[0]+s[1]+s[2]+s[3]+s[4];
	printf("Total Marks : %d\n",sum);
	printf("Average marks : %d",sum/5);
}
