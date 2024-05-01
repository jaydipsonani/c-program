#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,sum=0;
	clrscr();
	printf("enter the value=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	printf("sum=%d",sum);
getch();
}