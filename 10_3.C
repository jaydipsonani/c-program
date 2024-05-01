#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t=0,sum=0;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	do
	{
		t=n%10;
		sum=sum+t;
		n++;
		n=n/10;
	}while(n>0);
	printf("sum=%d",sum);


getch();
}
