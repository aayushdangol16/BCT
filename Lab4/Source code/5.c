#include<stdio.h>
#include<conio.h>
void main()
{
	int num,min,max;
	char c;
	printf("Enter Number: ");
	scanf("%d",&num);
	max=min=num;
	do
	{
		printf("Enter Number: ");
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
		else if(num<max)
		{
			min=num;
		}
		printf("Y for continue: ");
		fflush(stdin);
		c=getchar();
	}while(c=='y');
	printf("max=%d\nmin=%d",max,min);
	getch();
}
