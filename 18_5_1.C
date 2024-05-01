#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100],i,cnt=1;
	clrscr();
	printf("enter c:");
	gets(c);

	for(i=0;c[i]!=NULL;i++)
	{
		cnt++;
	}
	printf("lendth=%d",cnt);

getch();
}