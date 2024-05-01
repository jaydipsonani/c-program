#include<stdio.h>
#include<conio.h>
void main()
{
	float pi=3.14,r,total;
	clrscr();

	printf("enter r:");
	scanf("%f",&r);


	total=2*pi*r;
	printf("area=%f",total);

getch();
}