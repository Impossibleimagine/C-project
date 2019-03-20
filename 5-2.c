#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&a);
	for (b=1;b<a;b++)
		printf("%d\n",b);
		if (b==a)
			for (a=b;a>0;a--)
			printf("%d\n",a);
}
