#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	float avg;
	int num[8]={1,2,3,4,5,6,7,8};
	for(i=0;i<8;i++)
	{
		sum=sum+num[i];
	}
	avg=(float)sum/8;
	printf("Sum=%d\navg=%.1f",sum,avg);
	
	getch();
}
