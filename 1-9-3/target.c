#include <stdio.h>

void test(int a, int b[], int c[], int d[], int e[])
{
    int tmp;
    tmp = a; a = b[0]; b[0] = tmp;
    tmp = c[2]; c[2] = c[0]; c[0] = tmp;
    tmp = d[1]; d[0] = e[0]; e[0] = tmp;
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
