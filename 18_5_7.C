#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100],i,cnt=0;
	clrscr();
	printf("enter c:");
	gets(c);

	if(c[i]!=32)
	{
		cnt++;
	}

	for(i=0;c[i]!=NULL;i++)
	{
		if(c[i]==32 && c[i+1]!=32)
		{
			cnt++;
		}
	}
	printf("length=%d",cnt);
getch();
}