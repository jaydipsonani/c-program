#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter a:");
	scanf("%d",&a);

	printf("enter b:");
	scanf("%d",b);

	printf("\na=%d",a);
	printf("\nb=%d",b);

	c=a;
	a=b;
	b=c;

	printf("\na=%d",a);
	printf("\nb=%d",b);


getch();
}
