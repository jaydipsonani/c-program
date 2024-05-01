#include<stdio.h>
#include<conio.h>
void main()
{
	int s=0,n,t,t1;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	t1=n;

	for(;n>0;)
	{
		t=n%10;
		s=(s*10)+t;
		n=n/10;
	}
		if(s==t1)
		{
			printf("palindron");
		}
		else
		{
			printf("not palindron");
		}
getch();
}