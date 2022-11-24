#include<stdio.h>
int main()
{
	float num=50.5;
	float *ptr;
	printf("Value of Variable is : %f",num);
	printf("\nMemory Adreess of Variable is : %d",&num);
	ptr=&num;
	printf("\nValue of Pointer Variable is : %d",ptr);
	num=num+200;
	printf("\nValue Stored at Memory address : %f",(*ptr));
	printf("\nMemory Adress of Pointer Variable : %d",&ptr);
	*ptr=*ptr+100;
	printf("\n Value of Num Variable is : %f",num);
}

