#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i;
	clrscr();
	printf("enter a:");
	gets(a);

	if(a[0]!=32)
	{
		printf("%c",a[0]);
	}
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==32 && a[i+1]!=32)
		{
			printf("\t%c",a[i+1]);
		}
	}
getch();
}