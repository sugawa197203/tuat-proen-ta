#include<stdio.h>

void func(int x[10]){
    int i;

    for(i = 0; i <= 9; i++){
        x[i] = 9-i;
    }
}

int main(void)
{
    int i, x[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    func(x);
    
    for(i=0; i<=9; i++){

        printf("xの%d番目の要素は%d\n", i, x[i]);
    }

    return 0;
}
