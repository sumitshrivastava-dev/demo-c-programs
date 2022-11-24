/* WAP to create a UDF to find square of a number
		int square(int num)
	now create a UDF to find area of the circle and use square.
		void areaofcircle()	
		*/
		
#include<stdio.h>
void main()
{
	int n,area=0;
	printf("Enter a number to find Square : ");
	scanf("%d",&n);
	area=3.14*(square(n));
	printf("Area of Circle is : %d",area);
}
int square(int num)
{
	int sq=0;
	sq=num*num;
	return sq;
}
