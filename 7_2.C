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

	(a<b && a<c) ? printf("a is min"):(b<c) ? printf("b is min"):printf("c is min");

getch();
}