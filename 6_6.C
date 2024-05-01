#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a=");
	scanf("%d",&a);

	printf("enter b=");
	scanf("%d",&b);

	printf("enter c=");
	scanf("%d",&c);

	if(a<10)
	{
		if(b<10)
		{
			if(c<10)
			{
				printf("creative");
			}
			else
			{
				printf("multamedia");
			}
		}
		else
		{
			printf("multimedia");
		}
	}
	else
	{
		printf("multimedia");
	}
getch();
}