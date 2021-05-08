#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	float m,a,m1;
	printf("Enter Minor: ");
	scanf("%f",&m);
	printf("Enter Major: ");
	scanf("%f",&m1);
	a=pi*m*m1;
	printf("Area of Ellipse=%.1f",a);
	getch();
}
