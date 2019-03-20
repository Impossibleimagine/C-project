#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a/50;
	c=a%50/10;
	d=a%10/5;
	a=a%10-5*d;
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",a);
}
