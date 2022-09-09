#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));            // rand number initialize (without intialize, alway same number)
    int number = rand() % 3;      // 3 is range starting from 0 > 0~2  (both include)
    int number2 = rand() % 3 + 1; // 1~3
    printf("%d", number);
    return 0;
}