#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);

	printf("enter b:");
	scanf("%d",&b);

	printf("enter c:");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("a is min");
		}
		else
		{
			printf("c is min");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is min");
		}
		else
		{
			printf("c is min");
		}

	}

getch();
}