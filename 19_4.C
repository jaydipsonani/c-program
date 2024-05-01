#include<stdio.h>
#include<conio.h>
int a,b;
void swap()
{
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\na=%d",a);
	printf("\nb=%d",b);
}
void main()
{
	clrscr();
	swap();

getch();
}
