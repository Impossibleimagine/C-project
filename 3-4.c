#include<stdio.h>
main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=(a%3==0)&&(a%5!=0)||
		(a%5==0)&&(a%3!=0);
	printf("%d",b);
}
