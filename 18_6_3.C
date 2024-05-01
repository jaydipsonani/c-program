#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i;
	clrscr();
	printf("enter a:");
	gets(a);

	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			printf("\t%c",a[i]);
		}
	}
getch();
}