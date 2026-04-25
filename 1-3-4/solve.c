#include<stdio.h>

int main(void) {
    int n;
    printf("nを入力:");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 8 == 0)
    {
        printf("3と8の公倍数です。\n");
    }

    return 0;
}
