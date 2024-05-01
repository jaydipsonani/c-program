#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n;
	clrscr();
	printf("enter the value=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\na[%d]%d",i,a[i]);
	}
getch();
}