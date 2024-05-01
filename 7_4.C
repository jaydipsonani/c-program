#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	float total=0;
	clrscr();

	printf("enter unit=");
	scanf("%d",&unit);

	if(unit<=50)
	{
		total=unit*0.50;
	}
	else if(unit<=150)
	{
		total=25+(unit-150)*0.75;
	}
	else if(unit<=250)
	{
		total=100+(unit-150)*1.20;
	}
	else
	{
		total=220*(unit-250)*1.50;
	}
	total=total+(total*20)/100;
	printf("total=%f",total);
getch();
}