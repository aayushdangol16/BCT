#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,i,j;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	printf("Prime Number:\n");
	for(j=num1;j<=num2;j++)
	{
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			break;
		}
	}
	if(j==i)
	{
		printf("%d\n",j);
	}
	
	}
	getch();
}
