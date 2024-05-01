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

	if(a==b)
	{
		if(a==c)
		{
			printf("a b c same");
		}
		else
		{
			if(c<a)
			{
				printf("ab same c min");
			}
			else
			{
				printf("ab same c max");
			}
		}
	}
	else
	{
		if(b==c)
		{
			if(a,b)
			{
				printf("bc same a min");
			}
			else
			{
				printf("bc same a max");
			}
		}
		else
		{
			if(a==c)
			{
				if(b<a)
				{
					printf("ac same b min");
				}
				else
				{
					printf("ac same b max");
				}
			}
			else
			{
				printf("a,b,c ditff");
			}

		}
	}

getch();
}