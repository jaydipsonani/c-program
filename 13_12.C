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
	printf("enter possition=");
	scanf("%d",&p);
	printf("enter element=");
	scanf("%d",&s);

	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}
	a[p]=s;
	for(i=0;i<n+1;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
getch();
}