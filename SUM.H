void sum()
{
	int pi=3.14,r,side,l,b,a,square,circle,rectangle,h,tringle;

	printf("enter of a:");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
		printf("\n enter value");
		scanf("%d",&r);

		circle=pi*r*r;

		printf("\n area of citcle=%d",circle);
		break;

		case 2:
		printf("enter side value");
		scanf("%d",&side);

		square=side*side;

		printf("\n area of square=%d",square);

		break;

		case 3:
		printf("enter length:");
		scanf("%d",&l);
		printf("enter of b:");
		scanf("%d",&b);

		rectangle=l*b;

		printf("area of rectangel=%d",rectangle);

		break;
		case 4:
		printf("\n enter h:");
		scanf("%d",&h);
		printf("enter b:");
		scanf("%d",&b);

		tringle=h*b/2;

		printf("\n area of tringle=%d",tringle);

		break;


		printf("\n please enter valid numbre");


	}
}
