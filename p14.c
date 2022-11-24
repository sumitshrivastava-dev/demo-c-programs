// WAP to input a number from user and find that it is Palindrome or not

#include<stdio.h>
int main()
{
	int num,temp,rev,rem;
	printf("Enter a Number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;			//	num=25 25%10=5 	rem=5	// 2%10=2
		rev=rev*10+rem; //	rev = 0 , rev*10 = 0*10=0 +5 =5;	// 5*10=50+2=52
		num=num/10;			//	25/10	=2
	}
	printf("Given NUmber is : %d\n",temp);
	printf("Reverse Number is : %d\n",rev);
	if(temp==rev)
	{
		printf("Number is Palindrome ");
	}
	else
	{
		printf("Number is not Palindrom");
	}
}
