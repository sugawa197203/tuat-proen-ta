#include <stdio.h>

void test(int a, int *b, int c[], int *d, int *e)
{
    int tmp;
    tmp = a; a = *b; *b = tmp;
    tmp = c[0]; c[0] = c[1]; c[1] = tmp;
    tmp = *d; *d = *e; *e = tmp;
}

int main(void)
{
    int x = 1, y = 2, z[3] = {3, 4, 5}, *p, *q;
    p = &z[1]; q = &z[2];
    test(x, &y, z, p, q);
    printf("x = %d, y = %d, z[0] = %d, z[1] = %d, z[2] = %d\n",

    x, y, z[0], z[1], z[2]);

    return 0;
}