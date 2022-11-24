//WAP To Input Your 5 Subject marks of 10th and print total,average marks and pecentage

#include<stdio.h>
int main()
{
	float hindi,maths,english,science,gk,total,avg,per;
	printf("Enter Your Marks in Hindi : ");
	scanf("%f",&hindi);
	printf("Enter Your Marks in Maths : ");
	scanf("%f",&maths);
	printf("Enter Your Marks in English : ");
	scanf("%f",&english);
	printf("Enter Your Marks in Science : ");
	scanf("%f",&science);
	printf("Enter Your Marks in G.K : ");
	scanf("%f",&gk);
	total=(hindi+maths+english+science+gk);
	avg=total/5;
	per=(total*100)/500;
	printf("Total Marks = %f out of 500\n",total);
	printf("Average Marks = %f \n",avg);
	printf("Percentage is = %f ",per);
}
