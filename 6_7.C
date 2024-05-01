#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\n this is positive");
	}
	else if(a==0)
	{
		printf("\n this is zero");
	}
	else
	{
		printf("\n this is negative");
	}
getch();
}