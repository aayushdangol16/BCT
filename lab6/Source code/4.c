#include<stdio.h>
#include<conio.h>
void read(int[],int);
void sort(int[],int);
void display(int[],int);
void main()
{
	int num[100],n;
	printf("Enter Number: ");
	scanf("%d",&n);
	read(num,n);
	sort(num,n);
	display(num,n);
	getch();
}
void read(int num1[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter Element: ");
		scanf("%d",&num1[i]);
	}
}
void sort(int num1[100],int n)
{
	int i,j,c;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num1[j]>num1[j+1])
			{
				c=num1[j+1];
				num1[j+1]=num1[j];
				num1[j]=c;
			}
		}
	}
}
void display(int num1[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",num1[i]);
	}
}
