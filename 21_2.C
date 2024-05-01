#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
	char a[100];
}x[100];
void main()
{
	int n,i;
	char b[100];
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	flushall();

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		gets(x[i].a);
	}
	printf("enter search element:");
	gets(b);

	for(i=0;i<n;i++)
	{
		if(strcmp(x[i].a,b)==0)
		{
			printf("\n %s",x[i].a);
		}
	}
getch();
}