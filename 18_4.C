#include<stdio.h>
#include<conio.h>
void main()
{
	 char a[100],i;
	 clrscr();
	 printf("enter a:");
	 scanf("%s",&a);
	 for(i=0;a[i]!=NULL;i++)
	 {
		printf("\na[%d]=%c",i,a[i]);
	 }
	 printf("\na[%d]=%d",i,a[i]);


 getch();
}
