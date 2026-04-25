#include<stdio.h>

int main(void) {
    int n;
    printf("nを入力:");
    scanf("%d", &n);

    if (n < 0) {
        printf("負です。¥n");
    }
    return 0;
}
