#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p,s;
	clrscr();
	printf("enter =");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter p=");
	scanf("%d",&p);
	printf("enter s=");
	scanf("%d",&s);

	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		{
		       a[i]=s;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
getch();
}