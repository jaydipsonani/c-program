#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1,sum=0;
	clrscr();

	printf("enter n");
	scanf("%d",&n);

	while(a<=n)
	{
		sum=sum+a;

		printf("\n%d",a);
		a++;
	}
		printf("\nsum=%d",sum);
getch();
}