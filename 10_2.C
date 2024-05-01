#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	do
	{
		printf("\n%d*%d*%d=%d",a,a,a,a*a*a);
		a++;
	}while(a<=n);

getch();
}