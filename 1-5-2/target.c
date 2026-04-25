#include <stdio.h>

#define YOUSO 10

int main(void){
    int score[YOUSO], n;

    for(n = 0; n < YOUSO; n++){
        printf("番号(%d)の点数を入力", n);
        scanf("%d", &score[n]);
    }
    
    printf("何番の点数を見ますか?");
    scanf("%d", &n);
    printf("%d番の点数は%dです", n, score[n]);

    return 0;
}
