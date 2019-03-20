#include<stdio.h>
main()
{
    int a,b,c,d;
    int e,f,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    f = a-c;
    g = b-d;
    if (f<0)
        f = c-a;
    if (g<0)
        g = d-b;
    e = (f+g)*2;
    printf("%d",e);
}
