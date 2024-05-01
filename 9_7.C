#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a;
	clrscr();
	printf("enter num=");
	scanf("%d",&n);

	while(n>0)
	{
		a=n%10;
		printf("%d",a);
		n=n/10;

	}


getch();
}