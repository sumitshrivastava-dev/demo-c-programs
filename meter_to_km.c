//WAP to input meters and fint out km and meter

#include<stdio.h>
int main()
{
	int meter,km,m;
	printf("Enter Total Meters : ");
	scanf("%d",&meter);
	km=meter/1000;
	m=meter%1000;
	printf("Total Meters = %d and meters = %d",km,m);
}
