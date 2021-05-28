#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,num,i;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("Number: %d\t%d\t",a,b);
	for(i=1;i<=num-2;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	getch();
}
