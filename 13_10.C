#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,cnt=0,h;
	clrscr();
	printf("enter =");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter search enter cnt=");
	scanf("%d",&h);
	for(i=0;i<n;i++)
	{
		if(a[i]==h)
		{
		       cnt++;
		}
	}
	printf("%d found %d",h,cnt);
getch();
}