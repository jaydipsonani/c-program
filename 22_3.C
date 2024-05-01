#include<stdio.h>
#include<conio.h>
void swap(int *p,int *p1)
{
	*p=  *p+*p1;
	*p1= *p-*p1;
	*p=  *p-*p1;
}
void main()
{
	int a=10,b=20,*p,*p1;
	clrscr();

	p=&a;
	p1=&b;

	swap(p, p1);
	printf("\np=%d",*p);
	printf("\np1=%d",*p1);

 getch();
}