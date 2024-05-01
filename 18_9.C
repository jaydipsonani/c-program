#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i,d,j;
	clrscr();

	printf("enter string:");
	gets(a);

	printf("enter delete value:");
	scanf("%c",&d);

	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==d)
		{
			for(j=i;a[j]!=NULL;j++)
			{
				a[j]=a[j+1];
			}
			i--;
		}
	}
	puts(a);
getch();
}