#include<stdio.h>
#include<conio.h>
void main()
{
	int s,n,t=0;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	for(s=1;s<=n;s++)
	{
		if(n%s==0)
		{
			t++;
		}
	}
		if(t==2)
		{
			printf("prime");
		}
		else
		{
			printf("not prime");
		}
getch();
}