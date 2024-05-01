#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,total,pr,min,max,cnt=0;
	clrscr();

	printf("enter s1=");
	scanf("%d",&s1);

	printf("enter s2=");
	scanf("%d",&s2);

	printf("enter s3=");
	scanf("%d",&s3);

	printf("enter s4=");
	scanf("%d",&s4);

	printf("enter s5=");
	scanf("%d",&s5);

	total=s1+s2+s3+s4+s5;
	pr=total/5;

		if(s1<s2 && s1<s3 && s1<s4 && s1<s5)
		{
			min=s1;
		}
		else if(s2<s3 && s2<s4 && s2<s5)
		{
			min =s2;
		}
		else if(s3<s4 && s3<s5)
		{
			min =s3;
		}
		else if(s4<s5)
		{
			min =s4;
		}
		else
		{
			min = s5;
		}

		if(s1>s2 && s1>s3 && s1<s4 && s1>s5)
		{
			max=s1;
		}
		else if(s2>s3 && s2>s4 && s2>s5)
		{
			max =s2;
		}
		else if(s3<s4 && s3>s5)
		{
			max =s3;
		}
		else if(s4>s5)
		{
			max =s4;
		}
		else
		{
			max = s5;
		}
		if(s1<35)
		{
			cnt++;
		}

		if(s2<35)
		{
			cnt++;
		}

		if(s3<35)
		{
			cnt++;
		}

		if(s4<35)
		{
			cnt++;
		}

		if(s5<35)
		{
			cnt++;
		}

		printf("\n s1 s2 s3 s4 s5 total pr min max atkt result");

		printf("\n%d %d %d %d %d %d %d %d %d %d",s1,s2,s3,s4,s5,total,pr,min,max,cnt);

		if(cnt==0)
		{
			printf("pass");
		}
		else if(cnt<=2)
		{
			printf("atkt");
		}
		else
		{
			printf("fail");
		}
		if(pr>80)
		{
			printf("\n grade A");
		}
		else if (pr>60)
		{
			printf("\n grade B");
		}
		else if (pr>40)
		{
			printf("\n grade C");
		}
		else
		{
			printf("\n grade d");
		}
getch();
}