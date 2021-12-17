#include <stdio.h>

int check(int a)
{
    int x=0;
    char *p=(char *)&a;
    for(int i = 0;i<2;i++)
    {
        x=*(p+i);
        *(p+i)=*(p+3-i);
        *(p+3-i)=x;
    }
    return a;
}

int main()
{
    int a=0x12345678;
    int flag=-1;
    flag=check(a);
    printf("%0x",flag);
}
