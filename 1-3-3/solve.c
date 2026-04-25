#include<stdio.h>

int main(void) {
    int n;
    printf("nを入力:");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%dは偶数です。\n", n);
    } else {
        printf("%dは奇数です。\n", n);
    }

    return 0;
}
