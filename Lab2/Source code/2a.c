#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	printf("a=%d\nb=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swap\na=%d\nb=%d",a,b);
	getch();
}
	
