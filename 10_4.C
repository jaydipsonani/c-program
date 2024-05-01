#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=30,c=2,sum=0;
	clrscr();

	do
	{
		if(a%c==0)
		{
			sum=sum+a;
		}
		a++;
	}while(a<=b);
	printf("\nsum=%d",sum);

getch();
}
