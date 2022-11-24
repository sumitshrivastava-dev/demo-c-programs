//WAP to Input your height in feet and print height in meter

#include<stdio.h>
int main()
{
	float feet,meter;
	printf("Enter Your Height in Feet : ");
	scanf("%f",&feet);
	meter=feet*0.3048;
	printf("Your Height in Meter = %f",meter);
}
