#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1;
	clrscr();

	printf("enter n");
	scanf("%d",&n);

	printf("enter n1");
	scanf("%d", &n1);

	if(n<n1)
	{
		while(n<=n1)
		{
			if(n%2!=0)
			printf("\n%d",n);
			n++;
		}
	}
	else
	{
		while(n>=n1)
		{
			if(n%2==0)
			printf("\n%d",n);
			n--;
		}
	}
getch();
}