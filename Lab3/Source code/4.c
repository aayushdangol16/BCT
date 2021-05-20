#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,s,sub,mul,mod;
	float div;
	printf("Enter Number: ");
	scanf("%d",&a);
	printf("Enter Operator(+,-,*,/,%): ");
	fflush(stdin);
	c=getchar();
	printf("Enter Number: ");
	scanf("%d",&b);
	switch(c)
	{
		case '+':	
			s=a+b;
			printf("Sum=%d",s);
			break;
		case '-':
			sub=a-b;
			printf("Sub=%d",sub);
			break;
		case '*':
			mul=a*b;
			printf("Mul=%d",mul);
			break;
		case '/':
			div=(float)a/b;
			printf("Div=%.2f",div);
			break;
		case '%':
			mod=a%b;
			printf("mod=%d",mod);
			break;
		default:
			printf("Invalid Operator");
			
	}
	getch();
}
