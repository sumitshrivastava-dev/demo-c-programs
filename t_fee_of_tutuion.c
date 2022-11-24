// 	WAP to Input Tution Fee and Print Total Fee
// 	Total Fee= Tution fee+18% GST +5000

#include<stdio.h>
int main()
{
	float fee,t_fee;
	printf("Enter Total Fee of Tution : ");
	scanf("%f",&fee);
	t_fee=fee+((18/fee)*100);
	printf("Total Fee(Including 18 percent G.S.T) = %f",t_fee);
}
