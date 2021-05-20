#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,d,root1,root2;
	printf("Enter A,B,C: ");
	scanf("%f%f%f",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=%.2f and root2=%.2f",root1,root2);
	}
	else if(d=0)
	{
		root1=(-b+sqrt(d))/(2*a);
		printf("root1=%.2f and root2=%.2f",root1);
	}
	else if(d<0)
	{
		root1=-b / (2 * a);
		root2=sqrt(-d) / (2 * a);
		printf("root1 = %.2f and root2 = %.2f", root1,root2);
    }

    return 0;
}
