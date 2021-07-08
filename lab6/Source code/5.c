#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,col,num[100][100],min;
	printf("Enter Row: ");
	scanf("%d",&row);
	printf("Enter Col: ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter Element: ");
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	min=num[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{

			if(num[i][j]<min)
			{
				min=num[i][j];
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j || (i+j)==row-1)
			{
				num[i][j]=min;
			}
		}
	}
	printf("\n");
for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
	}
	getch();
}
