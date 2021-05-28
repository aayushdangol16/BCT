#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter Num: ");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("multiple of 5\n");
	}
	else
	{
		printf("Not multiple of 5\n");
	}
	if(num%7==0 && num%11==0)
	{
		printf("divisible by 7 and 11");
	}
	else if(num%7==0 && num%11!=0)
	{
		printf("divisible by 7 but not by 11");
	}
	else if(num%7!=0 && num%11==0)
	{
		printf("divisible by 11 but not by 7");
	}
	else
	{
		printf("Not divisible 7 and 11");
	}
	getch();
}
