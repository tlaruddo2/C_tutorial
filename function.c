#include <stdio.h>

// declare
void p(int num);
int c(int num);

int main(void)
{

    p(1);
    int aa = c(10);
    printf("test %d\n", aa);

    return 0;
}

// implementation
void p(int num)
{
    printf("num: %d\n", num);
}

int c(int num)
{
    return num + 1;
}