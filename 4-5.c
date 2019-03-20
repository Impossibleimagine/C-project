#include<stdio.h>
main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d = b*b-4*a*c;
    if (d>0){

        printf("%d\n",1);
    }
    else if (d==0)
        printf("%d\n",d);
    else if (d<0)
        printf("%d\n",-1);
}
