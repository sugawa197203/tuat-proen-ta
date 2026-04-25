#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int D = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            puts("共有点は0個");
        }
        else {
            printf("共有点は1個");
        }
    }
    else {
        if (D > 0) {
            puts("共有点は2個");
        }
        else if (D == 0) {
            puts("共有点は1個");
        }
        else {
            puts("共有点は0個");
        }
    }
}
