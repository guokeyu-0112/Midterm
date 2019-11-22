#include <stdio.h>
int main()
{
    char ch;
    int a=0,word=0;
    printf("please enter a sentence");
    while((ch=getchar())!='\n')
    if(ch<'a'||ch>'z')
    word=0;
    else if(ch<'A'||ch>'Z')
    word=0;
    else if(word==0)
    {
        word=1;
        a++;
    }
    printf("The number of words is:%d",a);
    return 0;
}