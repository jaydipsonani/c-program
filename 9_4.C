#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a;
	clrscr();

	printf("enter the value1=");
	scanf("%d",&n);

	printf("enter the value2=");
	scanf("%d",&a);

	while(n<=a)
	{
		printf("\n%d",n);
		n++;
	}

getch();
}