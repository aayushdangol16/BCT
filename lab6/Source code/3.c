#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,num[100],c;
	printf("Enter Number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				c=num[j+1];
				num[j+1]=num[j];
				num[j]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",num[i]);
	}
	getch();
}
