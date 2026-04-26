#include<stdio.h>

void divAndRemainder(int* a, int* b){
    int dev, rem;
    dev = *a / *b;
    rem = *a % *b;
    *a = dev;
    *b = rem;
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);

    divAndRemainder(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
