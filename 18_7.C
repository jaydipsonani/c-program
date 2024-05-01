#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i,cnt=0;
	clrscr();
	printf("enter a:");
	gets(a);

	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==97)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
getch();
}