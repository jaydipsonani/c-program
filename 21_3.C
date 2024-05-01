#include<stdio.h>
#include<conio.h>
#include<string.h>
struct demo
{
	char a[100];
}x[100];
void main()
{
	int n,i,j;
	char b[100];
	clrscr();

	printf("Enter craete object:");
	scanf("%d",&n);

	flushall();

	for(i=0;i<n;i++)
	{
		printf("Enter string:");
		gets(x[i].a);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(x[i].a,x[j].a)<0)
			{
				strcpy(b,x[i].a);
				strcpy(x[i].a,x[j].a);
				strcpy(x[j].a,b);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%s",x[i].a);
	}
getch();
}