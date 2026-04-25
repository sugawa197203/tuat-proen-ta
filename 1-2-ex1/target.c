#include <stdio.h>

int main(void)
{
    double n;

    printf("小数を入力:");
    scanf("%lf",&n);
    printf("四捨五入すると %d です。\n",(int)(n+0.5));
    return 0;
}
