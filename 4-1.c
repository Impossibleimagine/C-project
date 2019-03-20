#include<stdio.h>
main()
{
    int a,b,c ,da;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    da = (a>b)? b:a;
    a  = (da>c)? c:da;
    printf("%d",a);
}
