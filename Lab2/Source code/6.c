#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int num,rem,sum=0,a;
	printf("Enter Number: ");
	scanf("%d",&num);
	a=num;

	
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
		
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
		
		rem=num%10;
		sum=sum+pow(rem,3);
		num=num/10;
		
		if(a==sum)
		{
			printf("Armstrong");
		}
		else
		{
			printf("Not Armstrong");
		}

	getch();
	
}

