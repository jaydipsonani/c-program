#include<stdio.h>
#include<conio.h>
void main()
{
	float price,rent,year,t,si;
	clrscr();

	printf("enter of price=");
	scanf("%f",&price);

	printf("enter of rent=");
	scanf("%f",&rent);

	printf("enter of year=");
	scanf("%f",&year);

	t = price*rent*year;
	si = t/100;

	printf("simple intrest on month =%f",si);
	si = si*12;
	printf("\nin simple intrest on year=%f",si);

getch();
}

