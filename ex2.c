#include <stdio.h>
int main()
{
    unsigned int a,b,c,d,e,f,g,h,i,j;
    int max;
    a=getchar();
    b=getchar();
    c=getchar();
    d=getchar();
    e=getchar();
    f=getchar();
    g=getchar();
    h=getchar();
    i=getchar();
    j=getchar();
    printf("please enter 10 numbers:%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
    max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    if(max<d)
    max=d;
    if(max<e)
    max=e;
    if(max<f)
    max=f;
    if(max<g)
    max=g;
    if(max<h)
    max=h;
    if(max<i)
    max=i;
    if(max<j)
    max=j;
    printf("The max is %d",max);
}