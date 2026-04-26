#include <stdio.h>

#define YOUSO 100

int main(void)
{
    int an1[YOUSO];
    int an2[YOUSO];
    int _3 = 1;

    an1[0] = 5;

    for (int i = 1; i < YOUSO; i++)
    {
        an1[i] = 3 * an1[i - 1] + 4;
    }

    printf("an1[20] = %d\n", an1[20+1]);


    for (int i = 0; i < YOUSO; i++)
    {
        _3 *= 3;
        an2[i] = _3 - 30;
    }


    return 0;
}
