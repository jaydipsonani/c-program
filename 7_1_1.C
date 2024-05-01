#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);

	printf("enter b=");
	scanf("%d",&b);

	printf("enter c=");
	scanf("%d",&c);

	printf("enter d=");
	scanf("%d",&d);

	printf("enter e=");
	scanf("%d",&e);
	if(a<b && a<c && a<d && a<e)
	{
		printf("a is min");
	}
	else if(b<c && b<d && b<e)
	{
		printf("b is min");
	}
	else if(c<d && c<e)
	{
		printf("c is min");
	}
	else if(d<e)
	{
		printf("d is min");
	}
	else
	{
		printf("e is min");
	}
getch();
}