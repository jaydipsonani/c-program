#include<stdio.h>
#include<conio.h>
void main()
{
	int p,p1;
	clrscr();

	printf("create password=");
	scanf("%d",&p);
	clrscr();
	do
	{
		printf("enter password");
		scanf("%d",&p1);
	}while(p1!=p);
	clrscr();
	printf("welcome");
getch();
}
