#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=1;
    if (a+b<=c)
        d=0;
     else if (a+c<=b)
        d=0;
    else if (b+c<=a)
        d=0;
    printf("%d",d);
}
