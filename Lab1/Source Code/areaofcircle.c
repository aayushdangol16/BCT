#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
	float r,a;
	printf("Enter Radius: ");
	scanf("%f",&r);
	a=pi*pow(r,2);
	printf("Area of circle=%.1f",a);
	getch();
}
