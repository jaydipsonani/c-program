#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,max=0;
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
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nmax=%d",max);
getch();
}