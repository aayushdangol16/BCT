#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,sum=0;
	printf("Enter Number: ");
	scanf("%d",&num);

		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
			
	printf("Reverse %d",sum);
	getch();
}
