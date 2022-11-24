// Write a C program to convert  specified days into year, weeks and days
// (Note: Ignore Leap year)

#include<stdio.h>
int main()
{
	int days,year,months,weeks,day,r_day;
	printf("Enter Total Days : ");
	scanf("%d",&days);
	year=days/365;
	r_day=days%365;
	months=r_day/30;
	r_day=r_day%30;
	weeks=r_day/7;
	day=r_day%7;
	printf("Total Year = %d \nTotal Months = %d \nTotal Weeks = %d\n Total Days = %d",year,months,weeks,day);
}

