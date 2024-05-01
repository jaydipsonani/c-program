#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	printf("%d%d",a,b);

	for(;c<=n;)
	{
		 c=a+b;
		 printf("%d",c);
		 a=b;
		 b=c;
	}
getch();
}