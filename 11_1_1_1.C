#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c=0,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	for(;a<=n;)
	{
		c=a+b;
		printf("%d",a);
		a=b;
		b=c;
	}
getch();
}