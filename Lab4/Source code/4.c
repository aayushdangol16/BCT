#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,min,hcf,lcm;
	printf("Enter Number: ");
	scanf("%d",&num1);
	printf("Enter Number: ");
	scanf("%d",&num2);
	min=(num1<num2)?num1:num2;
	while(min!=0)
	{
		if(num1%min==0 && num2%min==0)
		{
			
			break;
		}
		else
		{
			min-=1;
		}
	}
	hcf=min;
	lcm=(num1*num2)/hcf;
	printf("HCF is %d\nLCM is %d",hcf,lcm);
	
	getch();
}
