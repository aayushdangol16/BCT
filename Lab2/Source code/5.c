#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,sum=0,a;
	printf("Enter Number: ");
	scanf("%d",&num);
	a=num;
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	
	if(a==num)
	{
		printf("Palindrome");
	}
	else
	{
			printf("Not Palindrome");
	}
	
	getch();
}
