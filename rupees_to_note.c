//WAP to input Rupees and find out total notes of 2000,500,200,100,50,20,10,5,1;
#include<stdio.h>
int main()
{
	int rupees,two_th,one_th,five_hun,two_hun,one_hun,fifty,twenty,ten,five,one,r_rupee;
	printf("Enter Total Rupees : ");
	scanf("%d",&rupees);
	two_th=rupees/2000;
	r_rupee=rupees%2000;
	one_th=r_rupee/1000;
	r_rupee=r_rupee%1000;
	five_hun=r_rupee/500;
	r_rupee=r_rupee%500;
	two_hun=r_rupee/200;
	r_rupee=r_rupee%200;
	one_hun=r_rupee/100;
	r_rupee=r_rupee%100;
	fifty=r_rupee/50;
	r_rupee=r_rupee%50;
	twenty=r_rupee/20;
	r_rupee=r_rupee%20;
	ten=r_rupee/10;
	r_rupee=r_rupee%10;
	five= r_rupee/5;
	r_rupee=r_rupee%5;
	one=r_rupee;
	printf("Total 2000 rupees note = %d \n 1000 rupees note = %d \n 500 rupees note = %d \n 200 rupee note =%d \n 100 rupees note = %d \n 50 rupees note = %d \n 20 rupees note = %d \n 10 rupees note = %d \n 5 rupees note = %d \n 1 rupees note = %d ",two_th,one_th,five_hun,two_hun,one_hun,fifty,twenty,ten,five,one);
}
