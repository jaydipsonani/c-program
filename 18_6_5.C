#include<stdio.h>
#include<conio.h>
void main()
{
	 char c[100],i;
	 clrscr();
	 printf("enter c:");
	 gets(c);

	 for(i=0;c[i]!=NULL;i++)
	 {
		if(c[i]>=65 && c[i]<=90)
		{
		     c[i]=c[i]+32;
		}
		if(c[i]>=97 && c[i]<=122)
		{
		      c[0]= c[0]-32;
		}
		printf("%c",c[i]);
	 }




 getch();
}
