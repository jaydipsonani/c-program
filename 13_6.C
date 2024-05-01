#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,a[100],b[100],c[100],i,j=0,cnt;
	clrscr();
	printf("Enter n1 :");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);

	}
	printf("Enter n2 :");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		printf("denter b[%d]",i);
		scanf("%d",&b[i]);

	}

	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
		cnt++;
	}

	for(i=n1;i<n1+n2;i++)
	{
		c[i]=b[j];
		j++;
	}

	for(i=0;i<n1+n2;i++)
	{
		printf("\nc=[%d]%d",i,c[i]);
	}


getch();
}