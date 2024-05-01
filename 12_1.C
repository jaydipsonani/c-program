#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,n,sum=0,avg;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);
	while(n>0)
	{
		sum=a+b;
		avg=sum/2;
		printf("sum=%d,\navg=%d",sum,avg);
		break;
	}
getch();
}