#include <stdio.h>

int main(void){
    int i,n,sum;

    printf("nを入力:");
    scanf("%d",&n);
    sum=0;
    
    for(i=1; i<=n; i++){
        sum=sum+i; /*和の計算*/
    }

    printf("1~%dの和は%d\n",n,sum);
    
    return 0;
}
