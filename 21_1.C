#include<stdio.h>
#include<conio.h>
struct demo
{
	int a;
	float b;
	char c[100];
}d1;
void main()
{
	clrscr();
	printf("Enter a :");
	scanf("%d",&d1.a);


	printf("Enter c :");
	scanf("%s",&d1.c);

	printf("Enter b :");
	scanf("%f",&d1.b);
	printf("\na :%d",d1.a);
	printf("\nc :%s",d1.c);
	printf("\nb :%.2f",d1.b);
	getch();
}