#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	printf("Enter Char: ");
	a=getchar();
	if(a>=65 && a<=90)
	{
		a=a+32;
	}
	else if(a>=97 && a<=122)
	{
		a=a-32;
	}
	else
	{
		printf("Invalid");
	
	}
	printf("%c",a);
}
