#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
		for(c=1;c<=b;c++)
		printf("%d\n",c);
}
