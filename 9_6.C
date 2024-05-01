#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1,f=1;
	clrscr();

	printf("enter num=");
	scanf("%d",&n);

	while(a<=n)
		{
			f = f*a;
			printf("\n%d",a);
			a++;
		}

			printf("\nf=%d",f);
getch();
}