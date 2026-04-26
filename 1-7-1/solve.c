#include<stdio.h>

int main(void){
    int a=5;
    int *pA;

    pA = &a;
    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%p = %luです。\n", &a,(unsigned long int)&a);

    printf("ポインタpAの値は%p = %luです。\n", pA,(unsigned long int)pA);

    printf("ポインタpAが示すアドレスにある値は%dです。\n", *pA);

    return 0;
}
