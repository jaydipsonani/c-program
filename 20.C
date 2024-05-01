#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
	double a,b;
	int i;
	clrscr();
	printf("enter a:");
	scanf("%lf",&a);
	printf("enter b:");
	scanf("%lf",&b);

	  printf("a=%.0lf",ceil(a));
	  printf("\na=%.0lf",floor(a));
	  printf("\na=%.0lf",pow(a,b));
	  printf("\na=%.0lf",sqrt(a));

	  for(i=1;i<=5;i++)
	  {
		delay(100);
		printf("\n%d",rand()%10);
	  }



getch();
}