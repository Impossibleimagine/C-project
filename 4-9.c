#include<stdio.h>
main()
{
    int a,b,c,ra,ch,cr;
    scanf("%d%d%d",&a,&b,&c);
    if ((ra<0)||(ch<0)||(cr<0))
        printf("%d\n",1);
    else{
        cr = a - c;
        ra = (b - c*2 - cr*8)/2;
        ch = c - ra;
        printf("%d\n",ch);
        printf("%d\n",ra);
        printf("%d\n",cr);
        }
}
