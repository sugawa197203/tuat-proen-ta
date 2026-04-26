#include<stdio.h>

int Add(int x[1], int y){
    x[0] = x[0] + y;
    return x[0];
}

int main(void)
{
    int x[1] = {1}, y = 2;
    printf("xは%d, yは%d\n", x[0], y);
    printf("x+yは%d\n", Add(x, y));
    printf("xは%d\n",x[0]); /* x+yの結果が入る */

    return 0;
}
