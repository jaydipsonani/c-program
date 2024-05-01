#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100][100],t[100],i,n,j;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(a[i],a[j])<0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%s",i,a[i]);
	}

getch();
}