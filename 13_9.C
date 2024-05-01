#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,min;
	clrscr();
	printf("enter =");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
		       min=a[i];
		}
	}
	printf("\nmin=%d",min);
getch();
}