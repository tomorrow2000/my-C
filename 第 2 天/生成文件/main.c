#include <stdio.h>
#include "input.h"
#include "calcu.h"

int main(int argc,char argv[])
{
	int a,b,num;
	input_init(&a,&b);
	num = calcu(a,b);
	printf("%d+%d=%d",a,b,num);
	printf("over\n");

	return 0;
}

