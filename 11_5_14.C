#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i*2;j++)
		{
			if(j%2==1)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
getch();
}