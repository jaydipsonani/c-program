#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("enter a=");
	scanf("%d",&a);

	printf("enter b=");
	scanf("%d",&b);

	printf("enter c=");
	scanf("%d",&c);

	(a>b && a>c) ? printf("a is max"):(b>c) ? printf("b is max"):printf("c is max");

getch();
}