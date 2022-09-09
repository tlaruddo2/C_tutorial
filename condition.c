#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // int age = 15;
    // if (age >= 20)
    // {
    //     printf("adult\n");
    // }
    // else if (age >= 15)
    // {
    //     printf("studnet\n");
    // }
    // else
    // {
    //     printf("minor\n");
    // }

    // for (int i = 1; i < 30; ++i)
    // {
    //     printf("a");
    //     if (i >= 15)
    //     {
    //         break;
    //     }
    // }

    // // and , or && ||

    // swtich
    srand(time(NULL));
    int i = rand() % 3;

    switch (i)
    {
    case 0:
        printf("case: %d\n", i);
        break;
    case 1:
        break;

    default:
        break;
    }

    return 0;
}