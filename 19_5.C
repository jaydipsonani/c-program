#include<stdio.h>
#include<conio.h>
int max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		printf("a is max");
	}
	else if(b>c)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
}
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
	printf("\n");
	max(a,b,c);
getch();
}