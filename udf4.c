/*	wap to create a udf to find reverse value of a number 
		int reverse(int num)
	void polindrome() {within 1=1000}
*/

#include<stdio.h>
void main()
{
	int  num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("\n Reverse of number is :%d \n",reverse(num));
	if(reverse(num)==num)
	{
		printf("Polindrome");
	}
	else
	{
		printf("not Polindrome");
	}
}
int reverse(int num)
{
	int n,rev=0;
	while(num>0)
	{
		n=num%10;
		rev=rev*10+n;
		num/=10;
	}
	return rev;
}
