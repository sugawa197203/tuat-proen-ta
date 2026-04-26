#include<stdio.h>

void init(int x[10]){
    int i;

    for(i = 0; i <= 9; i++){
        x[i] = 9-i;
    }
}

void Scalar(int a[10], int k){
    int i;

    for(i = 0; i <= 9; i++){
        a[i] = a[i] * k;
    }
}

void AddVector(int a[10], int b[10]){
    int i;

    for(i = 0; i <= 9; i++){
        a[i] = a[i] + b[i];
    }
}

int main(void)
{
    int i, x[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    init(x);
    
    for(i=0; i<=9; i++){
        printf("xの%d番目の要素は%d\n", i, x[i]);
    }

    Scalar(x, 2);

    for(i=0; i<=9; i++){
        printf("xの%d番目の要素は%d\n", i, x[i]);
    }

    AddVector(x, x);

    for(i=0; i<=9; i++){
        printf("xの%d番目の要素は%d\n", i, x[i]);
    }

    return 0;
}
