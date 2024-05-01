#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[100][100],b[100][100],i,j,n,n1,sum=0;
	 clrscr();
	 printf("enter n:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	 }
	 for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	 }
	 printf("enter n1:");
	 scanf("%d",&n1);

	 for(i=0;i<n1;i++)
	 {
		for(j=0;j<n1;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	 }
	 for(i=0;i<n1;i++)
	 {
		for(j=0;j<n1;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	 }
	 printf("\nsum of matrix\n");
	 for(i=0;i<n;i++)
	 {

		for(j=0;j<n;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("\t%d",sum);
		}
		printf("\n\n");
	 }


 getch();
}

