#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        printf("%d\n",3);
    else if ((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
        printf("%d\n",1);
    else if ((a*a+b*b>c*c)||(a*a+c*c>b*b)||(b*b+c*c>a*a))
        printf("%d\n",2);
}
