#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("enter day");
	scanf("%d",&n);

	switch(n)
	{
		case 1:
			printf("monday");
		break;
		case 2:
			printf("tuesday");
		break;
		case 3:
			printf("wensday");
		break;
		case 4:
			printf("thursday");
		break;
		case 5:
			printf("friday");
		break;
		case 6:
			printf("satrday");
		break;
		case 7:
			printf("sonday");
		break;

		default:
			printf("enter valid num");
	}


getch();
}