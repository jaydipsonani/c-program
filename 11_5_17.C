#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
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




1
13
135
1357
13579