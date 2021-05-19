#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter Num:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	getch();
}
