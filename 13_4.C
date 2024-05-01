#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,b[100];
	clrscr();
	printf("enter the value=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]%d",i,b[i]);
	}
getch();
}