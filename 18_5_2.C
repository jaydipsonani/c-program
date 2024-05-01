#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100],i,cnt=0;
	clrscr();
	printf("enter c:");
	gets(c);

	for(i=0;c[i]!=NULL;i++)
	{
		if(c[i]>=65 && c[i]<=90 || c[i]>=97 && c[i]<=122)
		{
			cnt++;
		}
	}
	printf("length=%d",cnt);
getch();
}