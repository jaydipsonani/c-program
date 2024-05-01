#include<stdio.h>
#include<conio.h>
void main()
{
	float t,c,f;
	clrscr();

	printf("enter ten in celsius=\d");
	scanf("%d",&c);

	t=c*9/5;
	f=t+32;

	printf("in temperature in fahrenheit=%f",f);

getch();
}
