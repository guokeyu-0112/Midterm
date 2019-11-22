#include <stdio.h>
int main()
{
    unsigned long int a=1;
    int m=1;
    while(a!=0)
    {
        a<<1;
        m++;
    }
    unsigned long int max;
    max=0-1;
    unsigned long int min;
    min=123;
    printf("unsigned long int is size of %d bit.The max is %d ,the min is %d",m,max,min);


}