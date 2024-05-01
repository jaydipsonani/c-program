#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],n,i,j,min;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\nmin=%d",min);


getch();
}