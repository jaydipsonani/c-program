#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,b[100],t=0;
	clrscr();
	printf("enter the value=");
	scanf("%d",&n);
	t=n-1;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[t];
		t--;
	}
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]=%d",i,b[i]);
	}
getch();
}