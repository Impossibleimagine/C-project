#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    d = (a-b>b-a)? a-b+1 : b-a+1;
    c = (a+b)*d/2;
    printf("%d",c);
}
