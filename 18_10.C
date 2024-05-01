#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i,cnt=0;
	clrscr();

	printf("enter string:");
	gets(a);

	for(i=0;a[i]!=NULL;i++)
	{
		cnt++;
	}
	for(i=cnt;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	puts("\n");
getch();
}