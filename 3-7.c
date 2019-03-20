#include<stdio.h>
main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	//
	e=(c-a)*(d-b);
	f=(c-a+d-b)*2;
	printf("%d\n",e);
	printf("%d\n",f);
}
