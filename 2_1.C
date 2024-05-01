#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 40,b = 20,c,d,e,f;
	clrscr();
	printf("value of a = %d",a);
	printf("value of b = %d",b);

	c = a+b;
	printf("in sum of a and b is = %d",c);

	d = a*b;
	printf("in mul of a and b is = %d",d);

	e = a/b;
	printf("in div of a and b is = %d",e);

	f = a-b;
	printf("in sub of a and b is = %d",f);

	getch();
}