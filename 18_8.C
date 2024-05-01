#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],i,r,f;
	clrscr();
	printf("enter string:");
	gets(a);

	printf("enter find value:");
	scanf("%c",&f);

	flushall();

	printf("enter repalce value:");
	scanf("%c",&r);

	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==f)
		{
			a[i]=r;
		}
	}
	puts(a);
getch();
}