#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float num[10];
	for(i=0;i<10;i++)
	{
		printf("Enter Element: ");
		scanf("%f",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%.1f\t",num[i]);
	}
	getch();
}
