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
			a[i]=a[i]+32;
		}
	}
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==32)
		{
			a[i+1]=a[i+1]-32;
		}
	}
	a[0]=a[0]-32;
	printf("\n\n%s",a);
getch();
}