#include<stdio.h>
#include<conio.h>

void main()
{
	float p,t,r,s;
	printf("Enter Principle: ");
	scanf("%f",&p);
	printf("Enter Time: ");
	scanf("%f",&t);
	printf("Enter Rate: ");
	scanf("%f",&r);
	s=(p*t*r)/100;
	printf("Simple Interest=%.1f",s);
	getch();
}
