#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);

	while(a<=10)
	{
		if(a<0)
		{
			break;
		}
		printf("\n%d",a);
		sum=sum+a;
		a++;
	}
	printf("\nsum=%d",sum);
getch();
}