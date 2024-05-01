#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
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
	if(a>b && a>c && a>d && a>e)
	{
		printf("a is max");
	}
	else if(b>c && b>d && b>e)
	{
		printf("b is max");
	}
	else if(c>d && c>e)
	{
		printf("c is max");
	}
	else if(d>e)
	{
		printf("d is max");
	}
	else
	{
		printf("e is max");
	}
getch();
}