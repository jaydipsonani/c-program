#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,p;
	clrscr();
	printf("enter =");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter delete value=");
	scanf("%d",&p);

	for(i=p;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
getch();
}