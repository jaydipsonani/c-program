#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("enter of a=");
	scanf("%d",&a);

	printf("enter of b=");
	scanf("%d",&b);

	if (a<b)
	{
		printf("a is min");
	}
	else
	{
		printf("b is min");
	}

getch();
}