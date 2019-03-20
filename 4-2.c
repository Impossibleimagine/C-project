#include<stdio.h>
main()
{
    int ax,ay,bx,by,cx,cy;
    int x,y;
    //
    scanf("%d",&ax);
    scanf("%d",&ay);
    scanf("%d",&bx);
    scanf("%d",&by);
    scanf("%d",&cx);
    scanf("%d",&cy);
    //
    if((ax*ax+ay*ay) >= (bx*bx+by*by))
        {
        x = ax;
        y = ay;
        }
     else
        {
        x = bx;
        y = by;
        }
    if((bx*bx+by*by) >= (cx*cx+cy*cy))
        {
        x = bx;
        y = by;
        }
     else
        {
        x = cx;
        y = cy;
        }
    if((ax*ax+ay*ay) >= (cx*cx+cy*cy))
        {
        x = ax;
        y = ay;
        }
     else
        {
        x = cx;
        y = cy;
        }
    printf("%d\n",x);
    printf("%d",y);
}
