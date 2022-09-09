#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    int intArr[3];
    intArr[0] = a;
    intArr[1] = b;
    intArr[2] = c;

    // int arr = {2, 3, 4, 1};
    int arr2[10];
    printf("%d\n", arr2[3]); // not intiailized, return trash data (default, different )

    return 0;
}