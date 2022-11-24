#include<stdio.h>
int main()
{
    float l,b,area,per;
    printf("Enter the Length and Breadth of Rectangle : ");
    scanf("%f%f",&l,&b);
    area=l*b;
    per=2*(l+b);
    printf("Area Of Rectangle : %f ",area);
    printf("\n Perimeter Of Rectangle : %f",per);
}
