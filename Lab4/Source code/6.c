#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num,i,s;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("-10\t");
	for(i=1;i<=num;i++)
	{
		s=-10-pow(2,i);
		printf("%d\t",s);
	}
	getch();
}
