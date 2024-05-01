#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c=0,n,i;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("\n%d",a);
		a=b;
		b=c;
	}
getch();
}