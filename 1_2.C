#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,total,avg;
	clrscr();

	printf("enter s1=");
	scanf("%d",&s1);

	printf("enter s2=");
	scanf("%d",&s2);

	printf("enter s3=");
	scanf("%d",&s3);

	printf("enter S4=");
	scanf("%d",&s4);

	printf("enter s5=");
	scanf("%d",&s5);

	total=s1+s2+s3+s4+s5;
	avg=total/5;

	printf("\nsum = %d",total);
	printf("\navg=%d",avg);

	printf("\ns1,\ts2,\ts3,\ts4,\ts5,\ttotal,\tavg");
	printf("\n%d,\t%d,\t%d,\t%d,\t%d,\t%d,\t%d",s1,s2,s3,s4,s5,total,avg);

getch();
}

