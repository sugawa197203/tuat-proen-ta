#include <stdio.h>

void check(void)
{
    printf("-----ここまで動いた-----\n");
}

int main(void)
{
    printf("1行目\n");
    printf("2行目\n");
    check();
    printf("3行目\n");
    return 0;
}
