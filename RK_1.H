void revs()
{
	char a[100],i,cnt=0;
	printf("enter a:");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		cnt++;
	}
	for(i=cnt;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}