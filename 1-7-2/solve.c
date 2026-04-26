#include<stdio.h>

void swap0(int a, int b){
    int tmp;
    tmp = a; a = b; b = tmp;
}

void swap1(int *a, int *b){
    int tmp;
    tmp = *a; *a = *b; *b = tmp;
}

int main(void){
    int a, b;
    a = 1; b = 2;

    swap0(a, b);
    printf("aの値は%d, bの値は%d\n", a, b);

    a = 1; b = 2;

    swap1(&a, &b);
    printf("aの値は%d, bの値は%d\n", a, b);

    return 0;
}
