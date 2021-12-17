#include <stdio.h>

int check()
{
    long int a=1;
    char *p=(char *)&a;
    return *p;
}

int main()
{
    long int flag=-1;
    flag=check();
    if(flag == 1)
    printf("小段模式");
    else if(flag == 0)
    printf("大段模式");
}
