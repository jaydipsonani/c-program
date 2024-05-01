#include<stdio.h>
#include<conio.h>
void main()
{
	char c[100],i,cnt=0;
	clrscr();
	printf("enter c:");
	scanf("%s",&c);

	for(i=0;c[i]!=NULL;i++)
	{
		if(c[i]>=65 && c[i]<=90)
		{
			cnt++;
		}
	}
	printf("length=%d",cnt);
getch();
}