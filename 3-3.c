#include<stdio.h>
main()
{
int a,b,c,d,e;
scanf("%d",&a);
b=a/1000;
c=a%1000/100;
d=a%100/10;
e=a%10;
a=b+c+d+e;
printf("%d\n",a);
}
