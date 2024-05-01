#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b,sum=0;
	clrscr();
	while(a<=10)
	{
		printf("enter b:");
		scanf("%d",&b);
		a++;
		if(b<0)
		{
			continue;
		}
		sum=sum+b;
	}
	printf("sum=%d",sum);
getch();
}