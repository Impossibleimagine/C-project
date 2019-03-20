#include<stdio.h>
main()
{
    int a,b,c,d;
    int ans;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    //
    ans = (a-c)*(b-d);
     if (ans <= 0)
        ans = ans*(-1);
        printf("%d",ans);
}
