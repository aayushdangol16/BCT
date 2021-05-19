#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	printf("a=%d\nb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap\na=%d\nb=%d",a,b);
	getch();
	
