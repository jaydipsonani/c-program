#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	do
	{
		printf("\n%d*%d=%d",n,a,n*a);
		a++;
	}while(a<=10);

getch();
}

