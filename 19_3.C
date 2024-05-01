#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int i,t=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	return t;
}
void main()
{
	int n,t;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	t=fact(n);
	printf("fact=%d",t);
getch();
}