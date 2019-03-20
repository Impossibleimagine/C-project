#include<stdio.h>
main()
{
    int n,i,a,b;
    scanf("%d",&n);
    scanf("%d",&i);
    a = 0;
    b = 1;
    if (i==0)
        b = 1;
    while(a<i){
        b = b*n;
        a = a + 1;
        }
        printf("%d",b);
}
