/* int square(int num)
wap to input choice of user
if user press 1 : find area of Circle(3.14*r*r)
if user press 2 : find area of Rectangle(l*b)
if user press 1 : find area of triangle(1/2*b*h)

*/
#include<stdio.h>
int mul(int a,int b);
void main()
{
	int ch,a,che,b;
	start:
	printf("Enter 1 : Area of Circle\nEnter 2 : Area of Rectangle\nEnter 3 : Area of Triangle\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter radius of Circle : ");
			scanf("%d",&a);
			printf("Area of Circle : %f",3.14*mul(a,a));
			break;
		case 2:
			printf("Enter the Length and Breadth of the Rectangle : ");
			scanf("%d%d",&a,&b);	
			printf("Area of Rectangle : %d",mul(a,b));
			break;
		case 3:
			printf("Enter the height and breadth of Triangle : ");
			scanf("%d%d",&a,&b);
			printf("Area of Triangle : %f",(1.0/2)*mul(a,b));
			break;
		default:
			printf("Invalid Input");
			break;
	}
	printf("\nDo You Want to Continue ? Press 1 if Yes / Press 2 to No : ");
	scanf("%d",&che);
	if(che==1)
	goto start;
	else
	goto end;
	
	end:
	printf("\n\n\n\t\t\tThank You");
}
int mul(int a,int b)
{
	return a*b;
}
