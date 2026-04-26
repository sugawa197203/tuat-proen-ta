#include<stdio.h>

int Add(int x, int y)
{
    x = x + y;
    return x;
}

int main(void)
{
    int x=1, y=2;
    printf("xは%d, yは%d\n", x, y);
    printf("x+yは%d\n", Add(x, y));
    printf("xは%d\n",x); /* x+yの結果は入らない */
    return 0;
}
